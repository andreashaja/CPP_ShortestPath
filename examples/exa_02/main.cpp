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

#include <iostream>
#include <vector>
#include "./../../shortest_path.h"

using namespace std;

int main(int argc, char **argv)
{
  // create instance of shortest path search
  ShortestPath sp;

  // check wether filepath has been supplied as parameter
  string filePath = argc > 1 ? argv[1] : "citymap.txt"; // if no. of parameters > 1 use the parameter as filename, otherwise use citymap.txt

  // load map data from file
  sp.LoadGraphFromFile(filePath);

  // store all cities in a list
  vector<string> cities{"Emden", "Oldenburg", "Köln", "Hannover", "Frankfurt"};

  // initialize loop counter
  int counter{0};

  // loop as long as counter is smaller than the list size
  while (counter < cities.size())
  {
    // compute shortest path between last city in list and Mainz
    sp.FindPathBetweenCities(cities.at(counter), "Mainz");

    // print resulting path to console
    sp.PrintShortestPath();

    // increment counter variable
    counter++; // try counter = counter + 2; as an alternative
  }
}