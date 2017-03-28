#include "filereader.h"
#include <limits>
FileReader::FileReader()
{

}

QString FileReader::readTemperature()
{
     ifstream file("C:\\Users\\babym\\Documents\\workshopll_A307b\\temp.txt");
     int number_of_lines = 0;
     string line;
     while(getline(file,line))
             ++number_of_lines;
     cout << "Number of lines: " << number_of_lines << endl;
     file.close();
     file.open("C:\\Users\\babym\\Documents\\workshopll_A307b\\temp.txt");
     for(int lineNumber = 0; lineNumber < number_of_lines; lineNumber++){
         getline(file,line);
         cout << lineNumber << " - " << line << endl;
         if(lineNumber == (number_of_lines-1)){
             file.close();
             return QString::fromStdString(line);
         }
     }
     file.close();
     return 0;
}

QString FileReader::readHumidity()
{
    ifstream file("C:\\Users\\babym\\Documents\\workshopll_A307b\\humi.txt");
    int number_of_lines = 0;
    string line;
    while(getline(file,line))
            ++number_of_lines;
    cout << "Number of lines: " << number_of_lines << endl;
    file.close();
    file.open("C:\\Users\\babym\\Documents\\workshopll_A307b\\humi.txt");
    for(int lineNumber = 0; lineNumber < number_of_lines; lineNumber++){
        getline(file,line);
        cout << lineNumber << " - " << line << endl;
        if(lineNumber == (number_of_lines-1)){
            file.close();
             return QString::fromStdString(line);
        }
    }
    file.close();
    return 0;
}
