/*************************************************************************
	> File Name: listing6_6.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Nov 2017 08:53:15 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers: " << endl;
    int num1 = 0, num2 = 0;

    cin >> num1;
    cin >> num2;

    int max = (num1 > num2) ? num1 : num2;

    cout << "The greater of " << num1 << " and "\
        << num2 << " is: " << max << endl;
    return 0;
}
