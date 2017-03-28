#ifndef FILEREADER_H
#define FILEREADER_H
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <variableconverter.h>

using namespace std;

class FileReader: public VariableConverter
{
public:
    FileReader();
    QString readHumidity(void);
    QString readTemperature(void);
};

#endif // FILEREADER_H
