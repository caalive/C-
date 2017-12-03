/*************************************************************************
	> File Name: listing12_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Dec 2017 12:56:05 PM CST
 ************************************************************************/

#include <iostream>
#include <memory>

using namespace std;

class Date
{
    private:
        int day, month, year;
        string dateInString;
    public:
        Date(int inMonth, int inDay, int inYear)
            :month(inMonth), day(inDay), year(inYear){};

        void DisplayDate()
        {
            cout << month << " / " << day << " / " << year << endl;
        }
};

int main()
{
    unique_ptr<int> smartIntPtr(new int);
    *smartIntPtr = 42;

    // Use smart pointer type like an int*
    cout << "Integer value is: " << *smartIntPtr << endl;

    unique_ptr<Date> smartHoliday(new Date(12,25,2016));
    cout << "The new instance of date contains: ";
    // Use smartHoliday just as you would a Date*
    smartHoliday->DisplayDate();
    
    return 0;
}
