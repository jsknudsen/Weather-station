#ifndef FILEWRITER_H
#define FILEWRITER_H
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <Qstring>
#include <variableconverter.h>

using namespace std;

class FileWriter: public VariableConverter
{
public:
    FileWriter();
    void writeHumidity(QString tempString);
    void writeTemperature(QString tempString);
};

#endif // FILEWRITER_H
