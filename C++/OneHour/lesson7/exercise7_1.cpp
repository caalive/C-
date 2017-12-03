/*************************************************************************
	> File Name: exercise7_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Nov 2017 10:35:06 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;


// 函数重载计算 圆柱 和 球 的体积
const double Pi = 3.14159265;

double Volume(double radius, double pi);
double Volume(double radius, double height, double pi);


int main()
{
    cout << "Enter s for sphere, c for cyliner:";
    char userSelection = 's';
    cin >> userSelection;
    double radius = 0;
    cout << "Enter radius: ";
    cin >> radius;
    
    if(userSelection == 's')
    {
        cout << "Volume of sphere: " << Volume(radius, Pi) << endl;
    }
    else
    {
        cout << "Enter height: ";
        double height = 0;
        cin >> height;
        cout << "Volume of cylinder: " << Volume(radius, height, Pi) << endl;
    }
    return 0;
}

double Volume(double radius, double pi)
{
    return (4 * pi * radius * radius * radius) / 3;
}

double Volume(double radius, double height, double pi)
{
    return pi * radius * radius * height;
}
