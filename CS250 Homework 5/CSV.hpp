#ifndef CSV_HPP
#define CSV_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class CSV
{
    public:
        CSV();
        void getLine(ifstream&);
        string getField(int);
        int getNumFields();

    private:
        vector<string> m_fields;
        int m_numFields;
};

#endif // CSV_H
