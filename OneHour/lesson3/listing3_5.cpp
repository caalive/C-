/*************************************************************************
	> File Name: listing3_5.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Nov 2017 12:02:24 PM CST
 ************************************************************************/
#include <iostream>

int main()
{
    using namespace std;

    cout << "Computing the size of some C++ inbulit varibale types" << endl;

    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of unsigned short int: " << sizeof(unsigned short) << endl;
    cout << "Size of short int: " << sizeof(short) << endl;
    cout << "Size of unsigned long int: " << sizeof(unsigned long) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of unsigned long long: " << sizeof(unsigned long long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;

    cout << "The outpout changes with compiler, hardware and OS" << endl;
    return 0;
}
