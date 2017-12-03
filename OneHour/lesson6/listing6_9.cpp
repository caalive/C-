/*************************************************************************
	> File Name: listing6_9.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Nov 2017 09:19:42 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char userSelection = 'm';

    do
    {
        cout << "Enter two numners:";
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;

        cout << num1 << " X " << " = " <<  num2 << num1 * num2 << endl;
        cout << num1 << " + " << " = " << num2 << num1 + num2 << endl;

        cout << "Press x to exit(x) or any key to recalculate" << endl;
        cin >> userSelection;
    }while(userSelection != 'x');

    cout << "GoodBye!!!" << endl;
    return 0;
}
