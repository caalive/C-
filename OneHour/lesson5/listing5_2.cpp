/*************************************************************************
	> File Name: listing5_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 21 Nov 2017 10:29:31 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int startValue = 101; // Rest
    cout << "Start value of integer being operated: " << startValue << endl;

    int postfixIncrement = startValue++;
    cout << "Result of Postfix Increment = " << postfixIncrement << endl;
    cout << "After Postfix Increment, startValue = " << startValue << endl;

    startValue = 101; // Rest
    int prefixIncrement = ++startValue;
    cout << "Result of Prefix Increment = " << prefixIncrement << endl;
    cout << "After Prefix Increment, startValue = " << startValue << endl;

    startValue = 101; // Rest
    int postfixDecrement = startValue--;
    cout << "Result of Postfix Decrement = " << postfixDecrement << endl;
    cout << "After Postfix Demecrement, startValue = " << startValue << endl;
    
    startValue = 101; // Rest
    int prefixDecrement = --startValue;
    cout << "Result of Prefix Decrement = " << prefixDecrement << endl;
    cout << "After Prefix Decrement, startValue = " << startValue << endl;
    return 0;
}
