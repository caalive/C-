/*************************************************************************
	> File Name: listing12_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Dec 2017 12:44:55 PM CST
 ************************************************************************/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Date
{
    private:
        int day, month, year;
        string dateInString;
    public:
        Date(int inMonth, int inDay, int inYear)
            :month(inMonth), day(inDay), year(inYear){};
        
        operator const char*()
        {
            ostringstream formattedDate; // assists string constructor
            formattedDate << month << " / " << day << " / " << year;

            dateInString = formattedDate.str();
            return dateInString.c_str();
        }
};

int main()
{
    Date Holiday(12,25,2016);
    cout << "Holiday is on: " << Holiday << endl;
    
    return 0;
}
