/*************************************************************************
	> File Name: listing8_11.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 01:03:22 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Static array of 5 integers
    int myNumbers[5];

    // array assigned to poiners to int
    int *pointToNums = myNumbers;

    pointToNums = &myNumbers[0];


    //Display address contained in poiner
    cout << "pointToNums = 0x" << hex << pointToNums << endl;

    // Address of first element of array

    cout << "&myNumbers[0] = 0x" << &myNumbers[0] << endl;
    cout << "&myNumbers = 0x" << &myNumbers << endl;

    return 0;
}
