/*************************************************************************
	> File Name: listing8_14.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 01:56:37 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    cout << "Is it sunny (y/n)?";
    char userInput = 'y';
    cin >> userInput;

    // declare pointer and initialized
    bool* const isSunny = new bool;  
    *isSunny = true;

    if(userInput == 'n')
        *isSunny = false;

    cout << "boolean flag sunny says: " << *isSunny << endl;

    // release valid memory

    delete isSunny;

    return 0;
}
