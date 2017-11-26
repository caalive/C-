/*************************************************************************
	> File Name: listing8_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 10:39:46 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int age = 30;

    int * pointsToInt = &age;
    cout << "pointsToInt points to age now " << endl;

    //Displaying the value of pointer
    cout << "pointsToInt = 0x" << hex << pointsToInt << endl;

    int dogsAge = 9;
    pointsToInt = &dogsAge;
    cout << "pointsToInt = 0x" << hex << pointsToInt << endl;

    return 0;
}
