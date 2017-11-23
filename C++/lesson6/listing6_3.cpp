/*************************************************************************
	> File Name: listing6_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Nov 2017 08:14:24 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers: " << endl;
    float num1 = 0, num2 = 0;

    cin >> num1;
    cin >> num2;
    
    cout << "Enter 'd' to divide, anything else to multiply: ";
    char userInput = '\0';
    cin >> userInput;
    
    if(userInput == 'd')
    {
        cout << "You with to divide!" << endl;
        if(num2 != 0)
            cout << num1 << "/" << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed" << endl;
    }
    else
    {
        cout << "You wish to muliply!" << endl;
        cout << num1 << " X " << num2 << " = " << num1 * num2 << endl;
    }

    return 0;
}
