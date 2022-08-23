#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
/*This program turns a date in date format 4 (month day, year) into date format 5 (month/day/year) by: Josh Wallace*/

//the parseMonth method takes a string and converts to all uppercase then matches said string to the corresponding month #
//if invalid month, program returns -1 and displays "invalid month" to monitor
int parseMonth(std::string month){
    int monthInt = -1;
    transform(month.begin(), month.end(), month.begin(), toupper);

    if (month == "JANUARY")
        monthInt = 01;
        else if (month == "FEBRUARY")
        monthInt = 02;
       else if (month == "MARCH")
        monthInt = 03;
        else if (month == "APRIL")
        monthInt = 04;
        else if (month == "MAY")
        monthInt = 05;
        else if (month == "JUNE")
        monthInt = 06;
        else if (month == "JULY")
        monthInt = 07;
        else if (month == "AUGUST")
        monthInt = 8;
        else if (month == "SEPTEMBER")
        monthInt = 9;
        else if (month == "OCTOBER")
        monthInt = 10;
        else if (month == "NOVEMBER")
        monthInt = 11;
        else if (month == "DECEMBER")
        monthInt = 12;
        else {std::cout << "Invalid month";}
        return monthInt;


}

//the retrieveDate method takes the user input 
void retrieveDate(std::string inputString) {
    std::string month = "";
    int monthInt = 0;
    std::string day = "";
        if (inputString.find(',') != std::string::npos){
            month = inputString.substr(0, inputString.find(" "));
            inputString.erase(0, inputString.find(" ") + 1);
            monthInt = parseMonth(month);
            if (monthInt == -1){
                std::cout << " -- Please re-enter a valid month\n";
                }
                else {
            day = inputString.substr(0, inputString.find(","));
            if (std::stoi(day) > 31 || std::stoi(day) < 1){
                std::cout << "Invalid day -- please re-enter a valid day" << std::endl;
            }
            else {
            inputString.erase(0, inputString.find(",") + 2);
         if (std::stoi(inputString) > 2022){
            std::cout << "Invalid year -- please re-enter a valid eater" << std::endl;
        }
            else {
            std::cout << monthInt << "/" << day << "/" << inputString << std::endl;
            }
                }
                  }
      }
      else {std::cout << "Invalid entry -- please re-enter a date in the format of: 'MONTH DAY, YEAR'" << std::endl;}
    }

int main() {
    std::string hi = "Enter date : ex. January 1, 1999 - converts to 01/01/1999";
    std::cout << hi << std::endl << "Enter -1 to quit";

    std::string inputString = "";       
    getline(std::cin, inputString);
    while(inputString != "-1"){
    retrieveDate(inputString);
    getline(std::cin, inputString);
        }
    }



