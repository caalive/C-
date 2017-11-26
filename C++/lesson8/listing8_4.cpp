/*************************************************************************
	> File Name: listing8_4.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 10:48:51 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    int dogsAge = 9;

    cout << "Integer age = " << age << endl;
    cout << "Integer dogsAge = " << dogsAge << endl;

    int *pointsToInt  = &age;
    cout << "pointsToInt points to age" << endl;

    // Displaying the value of pointer
    cout << "*pointsToInt = " << *pointsToInt << endl;
    
    pointsToInt = &dogsAge;
    cout << "*pointToInt points to dogsAge now" << endl;

    cout << "pointsToInt = 0x" << hex << pointsToInt << endl;
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;


    return 0;
}
