/*************************************************************************
	> File Name: listing8_16.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 02:11:45 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Request LOTS of memory space, use nothrow
    
    int* pointsToNums = new(nothrow) int[0x1ffffffff];

    if(pointsToNums)  // check pointsToNums != NULL
    {
        // Use the allocated memory
        delete[] pointsToNums;
    }
    else
        cout << "Memory allocation failed. Ending program" << endl;
    return 0;
}
