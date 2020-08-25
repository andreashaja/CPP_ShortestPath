/* ---------------------------------------------------------------------
 * The Fearless Engineer
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * This file is published under the MIT License. For more info see https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com
 * ----------------------------------------------------------------------
 */

/* 
 * Aufgabe CPP_SP_2 : Gib alle Städtenamen auf der Konsole aus
 * 
 * Hinweis : Dies ist die Muster-Lösung für Aufgabe CPP_SP_2
 */

#include <iostream>
#include "./../../shortest_path.h"

using namespace std;

int main()
{
    // create instance of shortest path search
    ShortestPath sp;

    // load map from file (cities are graph nodes, streets are edges between nodes)
    sp.LoadGraphFromFile("citymap.txt");

    // student code
    int i = 0;
    while (i < sp.GetNumberOfCities())
    {
        // get current city name
        string city = sp.GetCityAtPosition(i);
        cout << city << endl;

        // increment loop variable
        i++;
    }
}