/*************************************************************************
	> File Name: lsiting12_4.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Dec 2017 01:18:50 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Date
{
    private:
        int day, month, year;
        string dateInString;
    public:
        Date(int inMonth, int inDay, int inYear)
            :month(inMonth), day(inDay), year(inYear){};
        
        Date operator + (int daysToAdd) // binary addition
        {
            Date newDate(month, day + daysToAdd, year);
            return newDate;
        }
        
        Date operator - (int daysToSub) //binary substraction
        {
            return Date(month, day - daysToSub, year);
        }
        
        void DisplayDate()
        {
            cout << month << " / " << day << " / " << year << endl;
        }
};

int main()
{
    Date Holiday(12,25,2016);
    cout << "Holiday on: ";
    Holiday.DisplayDate();

    Date PreviousHoliday(Holiday - 19);
    cout << "Previous holiday on: ";
    PreviousHoliday.DisplayDate();

    Date NextHliday(Holiday + 6);
    cout << "Next holiday on: ";
    NextHliday.DisplayDate();
    
    return 0;
}
