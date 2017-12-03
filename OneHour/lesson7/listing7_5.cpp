/*************************************************************************
	> File Name: listing7_5.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Nov 2017 08:30:09 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int GetFibNumber(int fibIndex)
{
    if(fibIndex < 2)
        return fibIndex;
    else
        return GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex - 2);
}


int main()
{
    cout << "Enter 0-based index of desired Fibonacci Number: ";
    int index = 0;
    cin >> index;

    cout << "Fibonacci number is: " << GetFibNumber(index) << endl;
    return 0;
}
