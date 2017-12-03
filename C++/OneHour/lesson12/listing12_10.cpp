/*************************************************************************
	> File Name: listing12_10.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Dec 2017 03:12:44 PM CST
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Display
{
    public:
        void operator () (string input) const
        {
            cout << input << endl;
        }
};

int main()
{
    Display displayFuncObj;

    displayFuncObj("Display this string!");
    return 0;
}
