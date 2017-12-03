/*************************************************************************
	> File Name: listing6_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Nov 2017 07:24:24 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two integers: ";
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    cout << "Enter \'m\' to multiply, anything else to add: ";
    char userSelection = '\0';
    cin >> userSelection;

    int result = 0;

    if(userSelection == 'm')
    {
        result = num1 * num2;
    }
    else
    {
        result = num1 + num2;
    }

    cout << "result is: " << result << endl;
    return 0;

}

