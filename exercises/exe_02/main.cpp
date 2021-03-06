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

int main(int argc, char **argv)
{
    // create instance of shortest path search
    ShortestPath sp;

    // check wether filepath has been supplied as parameter
    string filePath = argc > 1 ? argv[1] : "citymap.txt"; // if no. of parameters > 1 use the parameter, otherwise use citymap.txt

    // load map data from file
    sp.LoadGraphFromFile(filePath);

    // student code
    /* TODO : Use the existing while-loop as outer loop and add 
    an inner loop according to the description in README.md */
    int i = 0;
    while (i < sp.GetNumberOfCities())
    {
        // get current city name
        string city = sp.GetCityAtPosition(i);

        // increment loop variable
        i++;
    }
}