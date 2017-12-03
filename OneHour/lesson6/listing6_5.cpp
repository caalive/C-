/*************************************************************************
	> File Name: listing6_5.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Nov 2017 08:38:56 PM CST
 ************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    enum DaysOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    
    cout << "Find what days of the week are named after!" << endl;
    cout << "Enter a number for a day (Sunday = 0): ";

    int dayInput = Sunday;
    cin >> dayInput;
   
    cout << "dayInput:----> " << dayInput << endl;

    switch (dayInput)
    {
        case Sunday:
            cout << "Sunday was named after the sun" << endl;
            break;
        case Monday:
            cout << "Monday was named after the Moon" << endl;
            break;
        case Tuesday:
            cout << "Tuesday was named after the Mars" << endl;
            break;
        case Wednesday:
            cout << "Wednesday was named after the Mercury" << endl;
            break;
        case Thursday:
            cout << "Thursday was named after Jupiter" << endl;
            break;
        case Friday:
            cout << "Friday was named after Venus" << endl;
            break;
        case Saturday:
            cout << "Saturday was named after Saturn" << endl;
            break;
        default:
            cout << "Wrong input, execute again" << endl;
            break;
        
    }

    return 0;
}

