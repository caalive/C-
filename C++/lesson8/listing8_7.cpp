/*************************************************************************
	> File Name: listing8_7.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 11:24:25 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //Request for memory space for an int
    int* pointsToAnAge = new int;

    // Use the allocated memory to store a number
    cout << "Enter your dog's age: ";
    cin >> *pointsToAnAge;

    // use indirection operator* to access value
    cout << "Age " << *pointsToAnAge << " is stored at 0x" << hex << pointsToAnAge << endl; 
    delete pointsToAnAge; // release memory
    return 0;
}
