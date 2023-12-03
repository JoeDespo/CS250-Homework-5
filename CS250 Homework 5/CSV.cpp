#include "CSV.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

CSV::CSV()
{
    m_numFields = 0;
}

int CSV::getNumFields()
{
    return m_numFields;
}

string CSV::getField(int i)
{
    return m_fields[i];
}

void CSV::getLine(ifstream& fileIn)
{
    string line, field;
    getline(fileIn, line);  // use getline from istream

    stringstream str(line);
    m_fields.clear();
    m_numFields = 0;
    while (getline(str,field,',')) {  // use getline from istream
        m_numFields++;
        m_fields.push_back(field);
    }
}
