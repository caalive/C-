/*************************************************************************
	> File Name: listing3_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Nov 2017 11:21:09 AM CST
 ************************************************************************/
#include <iostream>
using namespace std;

// three global integers
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers()
{
    cout << "Enter the firstNumer: ";
    cin >> firstNumber;
    
    cout << "Enter the second number: ";
    cin >> secondNumber;
    multiplicationResult = firstNumber * secondNumber;

    cout << "Displaying from MultiplyNumbers(): ";
    cout << firstNumber << " X " << secondNumber;
    cout << " = " << multiplicationResult << endl;
}

int main()
{
    cout << "This program will help you multiply two numers" << endl;
    MultiplyNumbers();
    cout << "Displaying form main(): ";
    cout << firstNumber << " X " << secondNumber;
    cout << " = " << multiplicationResult << endl;
    return 0;
}

