/*************************************************************************
	> File Name: exercise7.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 18 Nov 2017 10:00:25 PM CST
 ************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare a variable to store an integer
    int inputNumber;
    cout << "Enter an integer: ";
    // store integer given user input
    cin >> inputNumber;
    // The same with text i.e. string data
    cout << "Enter your name: ";
    string inputName;
    cin >> inputName;

    cout << inputNumber << " entered " << inputName << endl;
    return 0;
}
