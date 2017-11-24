/*************************************************************************
	> File Name: exercise7_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Nov 2017 10:56:43 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;


void myArray(double arry[], int length)
{
    for(int index = 0; index < length; ++index)
        cout << arry[index] << " ";
    cout << endl;
}


int main()
{
    double arry[4] = {1,3,4,5};
    myArray(arry, 4);
    return 0;
}
