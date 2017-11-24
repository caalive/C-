/*************************************************************************
	> File Name: listing7_10.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Nov 2017 09:57:34 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

// define an inline function that doubles

inline long DoubleNum(int inputNum)
{
    return inputNum * 2;
}

int main()
{
    cout << "Enter an integer: ";
    int inputNum = 0;
    cin >> inputNum;
    // Call inline function
    cout << "Double is: " << DoubleNum(inputNum) << endl;
    return 0;
}
