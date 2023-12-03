//
//  Dogs.cpp
//  CS250 Homework 5
//
//  Created by Joseph D'Esposito on 11/21/23.
//
#include "CSV.hpp"
#include "Dogs.hpp"
#include <string>
#include <stdio.h>
#include <unordered_map>
#include <fstream>
using namespace std;

Dogs::Dogs()
{
    //Constructor
}

void Dogs::readFile(string fileName) //Method to read a CSV file
{
    //Create a file object for input using file name
    ifstream csv;
    csv.open(fileName,ios::in);
    
    if (csv.fail())
    {
        throw "Error: could not open input file";
    }
    
    string country;
    int pop;
        //Get country name from file: str name
        //Get country population from file: int pop
        //Add to hash map object: m_dogs["name"] = pop
        //Add the pop of the country to world total. m_worldPop += pop.
        
    while (csv)
    {
        m_csv.getLine(csv);
        if (m_csv.getNumFields() > 0)
        {
            country = m_csv.getField(0);
            pop = stoi(m_csv.getField(1)); //Convert to int
            m_dogs[country] = pop;
            m_worldPop += pop; //The sum of all dog populations
        }
        
    }
        
}

int Dogs::inWorld() //return world population
{
    return m_worldPop;
}

int Dogs::inCountry(string country) //Returns the number of dogs in a country
{
    auto it = m_dogs.find(country); //Search the hash table for the country
    if (it != m_dogs.end())
    {
        return it -> second;
    }
    else
    {
        throw "Country not found";
    }
}
