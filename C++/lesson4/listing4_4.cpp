/*************************************************************************
	> File Name: listing4_4.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 20 Nov 2017 10:41:10 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> dynArry(3); // dynamic array of int 
    
    dynArry[0] = 365;
    dynArry[1] = -421;
    dynArry[2] = 789;

    cout << "Number of integers in array: " << dynArry.size() << endl;
    cout << "Enter another element to insert: " ;
    int newValue = 0;
    cin >> newValue;
    dynArry.push_back(newValue);

    cout << "Number of integers in array: " << dynArry.size() << endl;
    cout << "Last element in array: ";
    cout <<dynArry[dynArry.size() - 1] << endl;

    return 0;
}
