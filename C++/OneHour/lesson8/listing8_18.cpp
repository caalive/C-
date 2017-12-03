/*************************************************************************
	> File Name: listing8_18.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 02:44:01 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void GetSquare(int& number)
{
    number *= number;
}

int main()
{
    cout << "Enter an number you wish to square: ";
    int number = 0;
    cin >> number;

    GetSquare(number);
    cout << "Square is : " << number << endl;
    return 0;
}
