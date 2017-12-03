/*************************************************************************
	> File Name: listing3_8.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Nov 2017 01:17:26 PM CST
 ************************************************************************/

#include <iostream>

constexpr double GetPi() {return 22.0 / 7;}
constexpr double TwicePi() {return 2 * GetPi();}

int main()
{
    using namespace std;
    const double pi = 22.0 / 7;

    cout << "const pi value: " << pi << endl;
    cout << "constexpr GetPi() value: " << GetPi() << endl;
    cout << "constexpr TwicePi() value: " << TwicePi() << endl;

    return 0;
}
