/*************************************************************************
	> File Name: listing3_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Nov 2017 11:06:46 AM CST
 ************************************************************************/
#include <iostream>
using namespace std;

void MultiplyNumbers()
{

    cout << "Enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;

    int multiplicationResult = firstNumber * secondNumber;

    cout << firstNumber << " X " << secondNumber << " = " << multiplicationResult << endl;
}

int main()
{
    cout << "This program will help you multiply two numbers" << endl;
    MultiplyNumbers();
    return 0;
}
