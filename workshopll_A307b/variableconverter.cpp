#include "variableconverter.h"

string VariableConverter::Qstring_string(QString input)
{
    QByteArray str = input.toLocal8Bit();
    const char *c_str = str.data();
    string inputIsActuallyString = c_str;
    return inputIsActuallyString;
}

float VariableConverter::String_float(string input)
{

}

VariableConverter::VariableConverter()
{

}
