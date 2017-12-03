/*************************************************************************
	> File Name: listing5_10.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Nov 2017 09:25:10 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    cout << "Use sizeof to determine memory used bu arrays" << endl;
    int myNumbers [100] = {0};

    cout << "Bytes used by an int: " << sizeof(int) << endl;
    cout << "Bytes used by myNumbers: " << sizeof(myNumbers) << endl;
    cout << "Bytes used by an element: " << sizeof(myNumbers[0]) << endl;

    return 0;
}
