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
 
#include <iostream>
#include <vector>
#include "shortest_path.h"

using namespace std; 

int main() {
  
  // create instance of shortest path search
  ShortestPath sp; 

  // load map data from file 
  sp.LoadGraphFromFile("citymap.txt");

  // compute shortest path between cities
  sp.FindPathBetweenCities("Hannover","Mainz");

  // print resulting path to console
  sp.PrintShortestPath();
}
