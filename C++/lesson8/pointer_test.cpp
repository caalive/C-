/*************************************************************************
	> File Name: pointer_test.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 12:15:30 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //define const pointer and pointer const and const pointer const pointer


    cout << "------------------------const poiner----------------------" << endl;
    //const pointer
    const int* pointToInt;  // is equal to int const *pointToInt 
    
    int myNum1 = 20;
    int myNum2 = 30;
    pointToInt = & myNum1;   // OK
    cout << "now pointToInt is pointed to myNum1" << endl;
    pointToInt = & myNum2;   // OK
    cout << "now pointToInt is pointed to myNum2" << endl;

    //*pointToInt = 50;   // const poiner cannot change the pointed value!
    
    
    cout << endl;
    cout << endl;





    cout << "-----------------------pointer const -------------------" << endl;
    
    int* const newPointer = &myNum1; // OK 
    cout << "now const newPointer is pointed to myNum1" << endl;
    cout << "myNum1 value is: " << myNum1 << endl;
    *newPointer = 55;       // OK
    cout << "by *newPointer to change myNum1 value to 55: " << myNum1 << endl;
   
    // newPointer = &myNum2  // poiner const cannot change point 
    
    cout << endl;
    cout << endl;




    cout << "------------------------const poiner const pointer-------------------" << endl;
    const int* const pointer = &myNum2;
    cout << "now const int* const pointer pointed to myNum2 and address is: " << hex << pointer << endl;
    cout << endl;
    cout << endl;

    return 0;
}
