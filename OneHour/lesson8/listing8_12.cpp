/*************************************************************************
	> File Name: listing8_12.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 01:33:06 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_LEN = 5;

    //Static array of 5 integersm, initialized

    int myNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};

    //Poiner initialized to first element in array
    int *pointToNums = myNumbers;

    cout << "Display array using pointers syntax, operator*" << endl;
    for(int i = 0; i < ARRAY_LEN; ++i)
        cout << "Element " << i << " = " << *(pointToNums + i) << endl;
    cout << endl;

    cout << "Display array using ptr with array syntax, operator[]" << endl;
    for(int index = 0; index < ARRAY_LEN; index++)
        cout << "Element " << index << " = " << pointToNums[index] << endl;
    cout << endl;
    return 0;
}
