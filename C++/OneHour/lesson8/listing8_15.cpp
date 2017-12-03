/*************************************************************************
	> File Name: listing8_15.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 02:07:21 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // remove the try-catch block to see this application crash

    try
    {
        // Request a LOT of memory!
        int* pointsToManyNums = new int[0x1fffffff];

        //Use the allocated memory

        delete[] pointsToManyNums;
    }
    catch(bad_alloc)
    {
        cout << "Memory allocation failed. Ending program" << endl;
    }
    return 0;
}
