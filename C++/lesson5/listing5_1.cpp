/*************************************************************************
	> File Name: listing5_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 21 Nov 2017 10:15:20 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0;
    
    cin >> num1;
    cin >> num2;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;


    return 0;
}
