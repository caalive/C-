/*************************************************************************
	> File Name: listing12_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Dec 2017 12:26:25 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Date
{
    private:
        int day, month, year;
    public:
        Date(int inMonth, int inDay, int inYear)
            :month (inMonth), day (inDay), year (inYear){};
    Date& operator ++ () //prefix increment
    {
        ++day;
        return *this;
    }
    Date& operator -- () //prefix decrement
    {
        --day;
        return *this;
    }

    void DisplayDate()
    {
        cout<< month << " / " << day << " / " << year << endl; 
    }
};

int main()
{
    Date holiday(12,25,2016); // Dec 25, 16
    cout << "The date object is initilized to: ";
    holiday.DisplayDate();
    ++holiday;
    cout << "Date after a prefix-increment is: ";
    holiday.DisplayDate();

    --holiday;
    cout << "Date after a prefix-decrement is: ";
    holiday.DisplayDate();

    return 0;
}
