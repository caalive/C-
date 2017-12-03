/*************************************************************************
	> File Name: listing11_5.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 09:11:51 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class SimpleClass
{
    int a,b;
    public:
        void DoSomething(){}
};

class Base
{
    int a,b;
    public:
        virtual void DoSomething(){}
};

int main()
{
    cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
    cout << "sizeof(Base) = " << sizeof(Base) << endl;

    return 0;
}
