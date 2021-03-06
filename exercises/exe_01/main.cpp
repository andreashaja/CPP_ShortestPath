/* ---------------------------------------------------------------------
 * The Fearless Engineer
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * You should have received a copy of the MIT License along with this program. 
 * If not, see https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com 
 * ----------------------------------------------------------------------
 */

/* 
 * Aufgabe CPP_SP_2 : Gib alle Städtenamen auf der Konsole aus
 * 
 * Hinweis : Dies ist der Starter-Code für die Aufgabe. Was zu tun ist, findest du in der Datei "beschreibung.txt".
 */

#include <iostream>
#include "./../../shortest_path.h"

using namespace std;

int main(int argc, char** argv)
{
  // create instance of shortest path search
  ShortestPath sp;

  // check wether filepath has been supplied as parameter
  string filePath = argc>1 ? argv[1] : "citymap.txt"; // if no. of parameters > 1 use the parameter, otherwise use citymap.txt
  
  // load map data from file
  sp.LoadGraphFromFile(filePath);

  // student code
  /* TODO : Write your code here */
}