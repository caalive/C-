/*************************************************************************
	> File Name: listing3_4.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Nov 2017 11:47:40 AM CST
 ************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    unsigned short uShortValue = 65535;
    cout << "Incrementing unsigned short " << uShortValue << " gives: ";
    cout << ++uShortValue << endl;

    short signedShort = 32767;
    cout << "Incrementing signed short " << signedShort << " gives: ";
    cout << ++signedShort << endl;

    return 0;
}
