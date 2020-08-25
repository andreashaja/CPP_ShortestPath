/* ---------------------------------------------------------------------
 * The Fearless Engineer
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Purpose: Program for finding the shortest path between cities using the Dikjstra / A* algorithm
 *
 * You should have received a copy of the MIT License along with this program. 
 * If not, see https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com
 * ----------------------------------------------------------------------
 */

#ifndef SHORTEST_PATH_H
#define SHORTEST_PATH_H

#include <string>
#include <vector>
#include <memory>
#include <algorithm>

class Edge; // forward declaration to make Edge known in class Node

// represents a graph node (in this case a city)
class Node
{
private:
  std::vector<std::shared_ptr<Edge>> _edges; // all streets connected to this node
  int _id;                                   // unique identifier of node instance
  std::string _name;                         // city name

public:
  Node(int id) { _id = id; }

  int GetID() { return _id; }
  std::string GetName() { return _name; } // the node name

  void SetName(std::string name) { _name = name; }

  std::vector<std::shared_ptr<Edge>> GetEdges() { return _edges; }     // returns all edges for this node
  void AddEdge(std::shared_ptr<Edge> edge) { _edges.push_back(edge); } // adds an edge between two nodes
};

// represents a graph edge (in this case a street between two cities)
class Edge
{
private:
  std::shared_ptr<Node> _destNode; // node to which the edge points
  int _traversalCost;              // cost of traversing the edge (e.g. km)

public:
  Edge(std::shared_ptr<Node> destNode, int traversalCost)
  {
    _destNode = destNode;
    _traversalCost = traversalCost;
  }
  std::shared_ptr<Node> GetDestNode() { return _destNode; }
  int GetTraversalCost() { return _traversalCost; }
};

// element of a path found by A* / Dijkstra
class PathElement
{
public:
  std::shared_ptr<PathElement> parent = nullptr; // parent element (linked list)
  std::shared_ptr<Node> node = nullptr;          // associated node
  double hScore = 0.0, gScore = 0.0, fScore = 0.0;
};

// data structure that contains all tokens of a graph node (e.g. id, name, child, parent, traversal cost)
typedef std::vector<std::pair<std::string, std::string>> tokenlist;

// main class for conducting the path search between two nodes
class ShortestPath
{
private:
  std::vector<std::shared_ptr<Node>> _nodes;                        // list of all nodes
  std::vector<std::pair<std::shared_ptr<Node>, int>> _shortestPath; // path from start to destination with nodes and accumulated cost per node

  void FindPath(std::shared_ptr<Node> start, std::shared_ptr<Node> destination); // finds a path and stores it in _shortestPath

public:
  ShortestPath(){};
  void LoadGraphFromFile(std::string filename);                                    // loads all nodes and edges from map file
  void PrintGraph();                                                               // prints all nodes and edges loaded from the map file
  void PrintShortestPath();                                                        // prints the path stored in _shortestPath
  void PrintTotalDistance();                                                       // prints the total cost (in this case the length) between start and destination
  void FindPathBetweenCities(std::string startCityName, std::string destCityName); // finds the shortest path between two cities identified by their names
  std::string GetCityAtPosition(int pos);                                          // returns the city name of the node stored at position pos
  int GetNumberOfCities() { return _nodes.size(); }                                // returns the total number of cities loaded from the map file
};

#endif /* SHORTEST_PATH_H */