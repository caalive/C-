/*************************************************************************
	> File Name: listing8_10.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 12:52:26 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void CalcArea(const double* const ptrPi, const double* const ptrRadius, double* const ptrArea)
{
    // check pointers for validity before using!
    if(ptrPi && ptrRadius && ptrArea)
        *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
}

int main()
{
    const double Pi = 3.1416;

    cout << "Enter radius of circle: ";
    double radius = 0;
    cin >> radius;
    double area = 0;

    CalcArea(&Pi,&radius, &area);

    cout << "Area is = " << area << endl;
    return 0;
}
