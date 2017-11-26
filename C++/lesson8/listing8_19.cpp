/*************************************************************************
	> File Name: lsiting8_19.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 02:56:48 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void GetSquare(const int& number, int& result)
{
    result = number * number;
}

int main()
{
    cout << "Enter a number you wish to square: ";
    int number = 0;
    cin >> number;
    int square = 0;
    GetSquare(number, square);
    cout << number << "^2 = " << square << endl;

    return 0;
}
