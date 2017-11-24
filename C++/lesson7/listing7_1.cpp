/*************************************************************************
	> File Name: listing7_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Nov 2017 07:17:59 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

const double Pi = 3.14159265;

// Function Decalrations (Prototypes)

double Area(double readius);
double Circumference(double radius);

int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    // Call function Area
    cout << "Area is: " << Area(radius) << endl;
    
    //Call function Circumference
    cout << "Circumference is: " << Circumference(radius) << endl;
    return 0;
}

// Function definitions (implementations)
double Area(double radius)
{
    return Pi * radius * radius;
}

double Circumference(double radius)
{
    return 2 * Pi * radius;
}

