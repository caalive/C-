/*************************************************************************
	> File Name: listing6_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Nov 2017 08:02:43 PM CST
 ************************************************************************/
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a line of text: " << endl;
    string userInput;
    getline (cin, userInput);
    char copyInput[20] = {'\0'};
    
    if(userInput.length() <  20)
    {
        strcpy(copyInput, userInput.c_str());
        cout << "copyInput contains: " << copyInput << endl;
    }
    else
        cout << "Bounds execeeded: won't copy!" << endl;
    return 0;
}

