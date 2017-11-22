/**********************************************************************
	> File Name: listing5_7.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Nov 2017 08:48:05 PM CST
 ************************************************************************/
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a number(0 - 255): ";
    unsigned short inputNum = 0;
    cin >> inputNum;

    bitset<8> inputBits (inputNum);
    cout << inputNum << " in binary is: " << inputBits << endl;

    bitset<8> bitwiseNOT = (~inputNum);
    cout << "Logical NOT ~" << endl;
    cout << "~" << inputBits << " = " << bitwiseNOT << endl;

    cout << "Logical AND, & with 00001111" << endl;
    bitset<8> bitwiseAND = (0x0F & inputNum);

    cout << "Logical OR, | with 00001111" << endl;
    bitset<8> bitwiseOR = (0x0F | inputNum);
    cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;
    
    cout << "Logical XOR, ^ with 00001111" << endl;
    bitset<8> bitwiseXOR = (0x0F ^ inputNum);
    cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR<< endl;


    return 0;
}

