//
//  Dogs.hpp
//  CS250 Homework 5
//
//  Created by Joseph D'Esposito on 11/21/23.
//

#ifndef Dogs_hpp
#define Dogs_hpp

#include "CSV.hpp"
#include <string>
#include <stdio.h>
#include <unordered_map>
#include <fstream>
using namespace std;

class Dogs
{
public:
    Dogs(); //Constructor
    void readFile(string); //Method to read a CSV file
    int inWorld(); //Calculates and returns the number of dogs in the world
    int inCountry(string); //Returns the number of dogs in a country
protected:
    
private:
    unordered_map<string, int> m_dogs; //Hash table for countries (keys) and dog population.
    CSV m_csv; //CSV File
    int m_worldPop; //Stores the population of dogs in the world
};
#endif /* Dogs_hpp */
