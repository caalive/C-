/*************************************************************************
	> File Name: listing7_6.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Nov 2017 09:04:35 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

const double Pi = 3.14159265;

void QueryAndCalculate()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << "Area: " <<  Pi * radius * radius << endl;

    cout << "Do you wish to calculate circuference (y/n)? ";
    char calcCricum;
    cin >> calcCricum;

    if(calcCricum == 'n')
        return;

    cout << "Circumference: " << 2 * Pi * radius << endl;
    return;
}


int main()
{
    QueryAndCalculate();
    return 0;
}
