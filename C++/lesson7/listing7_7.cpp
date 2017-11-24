/*************************************************************************
	> File Name: listing7_7.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Nov 2017 09:17:39 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double Area(double radius);
double Area(double radius, double height);

int main()
{
    cout << "Enter z for Cylinder, c for Circle: ";
    char userSelection = 'z';
    cin >> userSelection;

    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    if(userSelection == 'z')
    {
        cout << "Enter heigth: ";
        double height = 0;
        cin >> height;

        cout << "Area of cylinder is: " << Area(radius, height) << endl;
    }
    else
        cout << "Area of circle is: " << Area(radius) << endl;
    return 0;
}

double Area(double radius)
{
    return Pi * radius * radius;
}


double Area(double radius, double height)
{
    return 2 * Area(radius) + 2 * Pi * radius * height;
}
