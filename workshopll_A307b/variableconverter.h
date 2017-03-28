#ifndef VARIABLECONVERTER_H
#define VARIABLECONVERTER_H
#include <string>
#include <QString>
using namespace std;
class VariableConverter
{
public:
    VariableConverter();
    string Qstring_string(QString input);
    float String_float(string input);

};

#endif // VARIABLECONVERTER_H
