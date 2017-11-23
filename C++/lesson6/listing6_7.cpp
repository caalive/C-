/*************************************************************************
	> File Name: listing6_7.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Nov 2017 09:01:24 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    Start:
        int num1 = 0, num2 = 0;
        
        cout << "Enter two integers: " << endl;
        cin >> num1;
        cin >> num2;
        
        cout << num1 << " X " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        
        cout << "Do you wish to perform another operation(y/n)?" << endl;
        
        char repeat = 'y';
        cin >> repeat;
        
        if(repeat == 'y')
            goto Start;
        cout << "GoodBye!!" << endl;
    return 0;
}
