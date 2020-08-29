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
 * Hinweis : Dies ist die Musterlösung für die Aufgabe.
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
    /* MODEL SOLUTION */
    // outer loop over city names
    int i = 0;
    while (i < sp.GetNumberOfCities() - 1)
    {
        // get first city name
        string city_outer = sp.GetCityAtPosition(i);

        // inner loop over city names
        int j = i + 1;
        while (j < sp.GetNumberOfCities())
        {
            // get second city name
            string city_inner = sp.GetCityAtPosition(j);

            // compute path between both cities
            sp.FindPathBetweenCities(city_outer, city_inner);

            // print city names and total distance
            sp.PrintTotalDistance();

            // increment inner loop variable
            j++;
        }
}