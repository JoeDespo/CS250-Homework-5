//  Stacks (CS 250: HW5)
//  Created by: Joseph D'Esposito
//  Last updated: 12/3/23
//  Program for the user to explore dog populations in various countries
//  from a CSV file using a Dogs class and hashtables.
//

#include "Dogs.hpp"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int request = 0;
    string country;
    Dogs dogs;
    dogs.readFile("dogs.txt");
    
    try
    {
        do{
            //Menu
            cout << "Enter the number for the desired action: " << endl <<
            "1: World Population of Dogs" << endl <<
            "2: Population of Dogs in a Country" << endl <<
            "3: Quit" << endl <<
            "Enter Choice: ";
            cin >> request;
            
            switch (request) {
                case 1:
                    cout << dogs.inWorld() << endl << endl;
                    break;
                case 2:
                    cout  << "Enter a country: " << endl;
                    cin >> country;
                    cout << dogs.inCountry(country) << endl << endl;
                    break;
                case 3:
                    break; //Quit the menu
                default:
                    cout << "Unknown selection " << endl << endl;
            }
        }
        while (request != 3);
    }
    
    catch (const char* msg)
    {
        cout << msg << endl;
    }
    
    return 0;
}
