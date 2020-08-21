/* ---------------------------------------------------------------------
 * The Fearless Engineer
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Purpose: Program for finding the shortest path between cities using the Dikjstra / A* algorithm
 *
 * This file is published under the MIT License. For more info see https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com
 * ----------------------------------------------------------------------
 */
 
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include "shortest_path.h"

using namespace std;

// loads all nodes and edges from map file
void ShortestPath::LoadGraphFromFile(std::string filename)
{
    // load file with nodes and edges
    std::ifstream file(filename);

    // check for file availability and process it line by line
    if (file)
    {
        // loop over all lines in the file
        std::string lineStr;
        while (getline(file, lineStr))
        {
            // extract all tokens from current line
            tokenlist tokens;
            while (lineStr.size() > 0)
            {
                // extract next token
                int posTokenFront = lineStr.find("<");
                int posTokenBack = lineStr.find(">");
                if (posTokenFront < 0 || posTokenBack < 0)
                  break; // quit loop if no complete token has been found
                std::string tokenStr = lineStr.substr(posTokenFront + 1, posTokenBack - 1);

                // check if line is commented out
                int posTokenComment = lineStr.find("//");                
                if (posTokenComment>=0 &&  posTokenComment<posTokenFront )
                  break; // quit loop because line is commented out

                // extract token type and info
                int posTokenInfo = tokenStr.find(":");
                if (posTokenInfo != std::string::npos)
                {
                    std::string tokenType = tokenStr.substr(0, posTokenInfo);
                    std::string tokenInfo = tokenStr.substr(posTokenInfo + 1, tokenStr.size() - 1);

                    // add token to vector
                    tokens.push_back(std::make_pair(tokenType, tokenInfo));
                }

                // remove token from current line
                lineStr = lineStr.substr(posTokenBack + 1, lineStr.size());
            }

            // process tokens for current line
            auto type = std::find_if(tokens.begin(), tokens.end(), [](const std::pair<std::string, std::string> &pair) { return pair.first == "TYPE"; });
            if (type != tokens.end())
            {
                // node-based processing
                if (type->second == "NODE")
                {
                    // extract id from token
                    auto idToken = std::find_if(tokens.begin(), tokens.end(), [](const std::pair<std::string, std::string> &pair) { return pair.first == "ID"; });
                    int id = std::stoi(idToken->second);

                    // check if node with this ID exists already
                    auto newNode = std::find_if(_nodes.begin(), _nodes.end(), [&id](const std::shared_ptr<Node> &node) { return node->GetID() == id; });

                    // create new element if ID does not yet exist
                    if (newNode == _nodes.end())
                    {
                        _nodes.emplace_back(std::make_shared<Node>(id));
                        newNode = _nodes.end() - 1; // get iterator to last element

                        // assign name to node
                        auto nameToken = std::find_if(tokens.begin(), tokens.end(), [](const std::pair<std::string, std::string> &pair) { return pair.first == "NAME"; });
                        if (nameToken != tokens.end())
                        {
                            (*newNode)->SetName(nameToken->second);
                        }
                        else
                        {
                            std::cout << "Error: City name missing." << std::endl;
                        }
                    }
                }

                // edge-based processing
                if (type->second == "EDGE")
                {
                    // find tokens for incoming (parent) and outgoing (child) node
                    auto parentToken = std::find_if(tokens.begin(), tokens.end(), [](const std::pair<std::string, std::string> &pair) { return pair.first == "PARENT"; });
                    auto childToken = std::find_if(tokens.begin(), tokens.end(), [](const std::pair<std::string, std::string> &pair) { return pair.first == "CHILD"; });

                    if (parentToken != tokens.end() && childToken != tokens.end())
                    {
                        // get iterator on incoming and outgoing node via ID search
                        auto parentNode = std::find_if(_nodes.begin(), _nodes.end(), [&parentToken](const std::shared_ptr<Node> &node) { return node->GetID() == std::stoi(parentToken->second); }); // TASK 3
                        auto childNode = std::find_if(_nodes.begin(), _nodes.end(), [&childToken](const std::shared_ptr<Node> &node) { return node->GetID() == std::stoi(childToken->second); });    // TASK 3

                        // add edge to both nodes (undirected graph)
                        auto costToken = std::find_if(tokens.begin(), tokens.end(), [](const std::pair<std::string, std::string> &pair) { return pair.first == "DISTANCE"; });
                        std::shared_ptr<Edge> parentToChild = std::make_shared<Edge>((*childNode), atoi(costToken->second.c_str()));
                        std::shared_ptr<Edge> childToParent = std::make_shared<Edge>((*parentNode), atoi(costToken->second.c_str()));
                        (*parentNode)->AddEdge(parentToChild);
                        (*childNode)->AddEdge(childToParent);
                    }
                }
            }
        } // eof loop over all lines in the file

        file.close();

    } // eof check for file availability
    else
    {
        std::cout << "File could not be opened!" << std::endl;
        return;
    }
}

// prints all nodes and edges loaded from the map file
void ShortestPath::PrintGraph()
{
    // loop over all nodes
    for (auto it1 : _nodes)
    {
        cout << "node " << it1->GetID()<< endl;
        auto edges = it1->GetEdges();
        for (auto it2 : edges)
        {
            cout << "   edge to node " << it2->GetDestNode()->GetID() << ", cost " << it2->GetTraversalCost() << endl;
        }
    }
}

void ShortestPath::FindPath(std::shared_ptr<Node> start, std::shared_ptr<Node> destination)
{
    // create open and closed list
    std::vector<std::shared_ptr<PathElement>> openList, closedList;

    // add start node to open list
    std::shared_ptr<PathElement> startNode(new PathElement());
    startNode->node = start;
    openList.push_back(startNode);

    // loop until open list is empty
    do
    {
        // get step from open list with lowest F score
        auto itMinElem = std::min_element(openList.begin(), openList.end(), [](std::shared_ptr<PathElement> elem1, std::shared_ptr<PathElement> elem2) {
            return elem1->fScore < elem2->fScore ? true : false;
        });
        std::shared_ptr<PathElement> currStep = *itMinElem;

        // remove current step from the open list
        openList.erase(itMinElem);

        // add current step to the closed list
        closedList.push_back(currStep);

        // check if current step is the target node
        if (currStep->node->GetID() == destination->GetID())
        {
          // backtrack path from destination to start point
          std::shared_ptr<PathElement> step = currStep;
          while (step->node->GetID() != startNode->node->GetID())
          {
            // extract node and accumulated cost from current path element
            auto currElem = make_pair(step->node, (int)step->gScore);
            _shortestPath.push_back(currElem);
            
            // replace current node with its own parent for backtracking
            step = step->parent;
          }

          // add start node as last element
          auto currElem = make_pair(step->node, step->gScore);
          _shortestPath.push_back(currElem);

          // path has been backtracked, so quit do-while loop
          break;
        }

        // process neighbors of current node
        std::vector<std::shared_ptr<Edge>> neighbors = currStep->node->GetEdges();
        for (auto it : neighbors)
        {
            // get node to which the edge is leading
            std::shared_ptr<PathElement> newStep(new PathElement());
            newStep->node = it->GetDestNode();

            // check if new step is not already in the closed list
            auto foundInClosed = std::find_if(closedList.begin(), closedList.end(), [newStep](std::shared_ptr<PathElement> elem) {
                return elem->node->GetID() == newStep->node->GetID() ? true : false;
            });

            if (foundInClosed != closedList.end())
                continue; // if already in closed list proceed to next neighbor

            // get cost for edge traversal
            double traversalCost = it->GetTraversalCost();

            // check if new step is already in the open list
            auto foundInOpen = std::find_if(openList.begin(), openList.end(), [newStep](std::shared_ptr<PathElement> elem) {
                return elem->node->GetID() == newStep->node->GetID() ? true : false;
            });

            if (foundInOpen == openList.end()) // if not in open list, add it
            {
                // set current node as parent node
                newStep->parent = currStep;

                // increment G score (start node to neigbor node)
                newStep->gScore = currStep->gScore + traversalCost;

                // compute H score (A* heuristic)
                newStep->hScore = 0.0; // if 0.0, A* is equivalent to Dijkstra

                // update F score
                newStep->fScore = newStep->gScore + newStep->hScore;

                // add neighbor to open list
                openList.push_back(newStep);
            }
            else
            { // neighbor node is already in the open list (i.e. a path to the neighbor already has been found)

                // check if G score for that step is lower if we use the current step to get there
                if ((currStep->gScore + traversalCost) < (*foundInOpen)->gScore)
                {
                    // update G score (parent score + movement cost) and F score
                    (*foundInOpen)->gScore = currStep->gScore + traversalCost;
                    (*foundInOpen)->fScore = (*foundInOpen)->gScore + (*foundInOpen)->hScore;

                    // update parent
                    (*foundInOpen)->parent = currStep;
                }
            }
        } // eof loop over neighbors of current node

    } while (openList.size() > 0);
}

// finds the shortest path between two cities identified by their names
void ShortestPath::FindPathBetweenCities(std::string startCityName, std::string destCityName)
{
    // delete previous path
    _shortestPath.clear();

    // find nodes associated with start and destination names
    auto startCityNode = std::find_if(_nodes.begin(), _nodes.end(), [&startCityName](const std::shared_ptr<Node> &node) { return node->GetName() == startCityName; });
    auto destCityNode = std::find_if(_nodes.begin(), _nodes.end(), [&destCityName](const std::shared_ptr<Node> &node) { return node->GetName() == destCityName; });

    // search for shortest path between start and destination
    FindPath(*startCityNode, *destCityNode);
}

// prints the path stored in _shortestPath
void ShortestPath::PrintShortestPath()
{
  // loop over cities en route in reverse order
  for (int i=_shortestPath.size()-1; i > 0 ; i--) 
  {
    cout << _shortestPath[i].first->GetName() << " -> "; 
    //cout << "  " << _shortestPath[_shortestPath.size()-1].first->GetName() << "-" << _shortestPath[i].first->GetName() << " --> " << _shortestPath[i].second << "km" << endl;
  }
  cout << _shortestPath[0].first->GetName() << " : " << _shortestPath[0].second << "km" << endl;
}

// prints the total cost (in this case the length) between start and destination
void ShortestPath::PrintTotalDistance()
{
  // get total distance from last element
  int totalDistance = _shortestPath[0].second;

  // get city names from first and last element
  string startCity = _shortestPath[_shortestPath.size()-1].first->GetName();
  string endCity = _shortestPath[0].first->GetName();

  // print result to console
  cout << startCity << " - " << endCity << " = " << totalDistance << "km" << endl;
}

// returns the city name of the node stored at position pos
std::string ShortestPath::GetCityAtPosition(int pos)
{
  // create return string
  string cityName = "";

  // check if index is within bounds
  if(pos>=0 && pos<_nodes.size())
  {
    // retrieve city name 
    shared_ptr<Node> node = _nodes.at(pos);

    // assign name to return string
    cityName = node->GetName();
  } 
  
  return cityName;
}

