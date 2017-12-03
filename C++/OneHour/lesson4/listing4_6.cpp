/*************************************************************************
	> File Name: listing4_6.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 21 Nov 2017 08:49:54 PM CST
 ************************************************************************/
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "Enter a word NOT longer than 20 characters:" << endl;
    char userInput [21] = {'\0'};
    cin >> userInput;

    cout << "Length of your input was: " << strlen(userInput) << endl;

    return 0;
}

