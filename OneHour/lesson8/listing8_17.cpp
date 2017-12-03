/*************************************************************************
	> File Name: listing8_17.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 02:34:04 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int original = 30;
    cout << "original = " << original << endl;
    cout << "original is at address: " << hex << &original << endl;

    int& ref1= original;
    cout << "ref1 is at address: " << hex << &ref1 << endl;
    
    int& ref2 = ref1;
    cout << "ref2 is at address: " << hex << &ref2 << endl;
    cout << "Therefore, ref2 = " << dec << ref2 <<endl;
    
    ref2 = 20;
    cout << "ref2 value to 20  and see original and ref1 value is: " << original << ref1 << endl;  
    return 0;
}
