/*************************************************************************
	> File Name: listing6_13.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Nov 2017 10:09:53 PM CST
 ************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    for(;;)
    {
        cout << "Enter two integers:" << endl;
        int num1 = 0, num2 = 0;

        cin >> num1;
        cin >> num2;

        cout << "Do you wish to correct the numbers? (y/n): ";
        char changeNumbers = '\0';
        cin >> changeNumbers;

        if(changeNumbers == 'y')
            continue; // restart the loop!!

        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

        cout << "Press x to exit or any other key to recalculate" << endl;
        
        char userSelection = '\0';
        cin >> userSelection;

        if(userSelection == 'x')
            break; // exit the infinite loop
    }

    cout << "Good Bye!!" << endl;
    return 0;
}

