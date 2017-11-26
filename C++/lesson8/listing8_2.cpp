/*************************************************************************
	> File Name: listing8_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 10:34:53 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    int* pointsToInt = &age;

    // Display the value of pointer 
    cout << "Integer age is at: 0x" << hex << pointsToInt << endl;
    return 0;
}

