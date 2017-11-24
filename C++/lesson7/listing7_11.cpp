/*************************************************************************
	> File Name: listing7_11.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Nov 2017 10:09:32 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

const double Pi = 3.14159265;

auto Area(double radius)
{
    return Pi * radius * radius;
}

int main()
{
    cout << "Enter radisu: ";
    double radius = 0;

    cin >> radius;

    //Call function Area
    cout << "Area is: " << Area(radius) << endl;
    return 0;
}
