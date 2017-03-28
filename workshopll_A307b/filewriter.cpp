#include "filewriter.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <Qstring>
#include <chrono>
#include <string>

using namespace std;

FileWriter::FileWriter()
{

}

void FileWriter::writeHumidity(QString tempString)
{
    ofstream file;
    file.open("C:\\Users\\babym\\Documents\\workshopll_A307b\\humi.txt", ios::app);
    if(file.is_open()){
        cout << "OPENED\n";
    }

    file << Qstring_string(tempString) << endl;
    file.close();
}

void FileWriter::writeTemperature(QString tempString)
{
    ofstream file;
    file.open("C:\\Users\\babym\\Documents\\workshopll_A307b\\temp.txt", ios::app);
    if(file.is_open()){
        cout << "OPENED\n";
    }

    file << Qstring_string(tempString) << endl;
    file.close();
}
