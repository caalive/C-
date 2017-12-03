/*************************************************************************
	> File Name: listing8_8.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Nov 2017 11:34:17 AM CST
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "How many integers shall I reserbe memory for?" << endl;
    int numEntries = 0;
    cin >> numEntries;

    int* myNumbers = new int[numEntries];
    cout << "Memory allocated at: 0x" << myNumbers << hex << endl;
    
    myNumbers[0] = 1;
    cout << "Output the first elements myNumbers[0]: " << myNumbers[0] << endl; 
    // de-allocate before exiting
    delete[] myNumbers;
    return 0;
}
