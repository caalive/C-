/*************************************************************************
	> File Name: listing10_7.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 10:25:34 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class FishDummyMember
{
    public:
        FishDummyMember()
        {
            cout << "FishDummyMember constructor " << endl;
        }
        ~FishDummyMember()
        {
            cout << "FishDummyMember destructor" << endl;
        }
};

class Fish
{
    protected:
        FishDummyMember dummy;
    public:
        Fish()
        {
            cout << "Fish constructor" << endl;
        }
        ~Fish()
        {
            cout << "Fish destructor" << endl;
        }
};

class TunaDummyMember
{
    public:
        TunaDummyMember()
        {
            cout << "TunaDummyMember constructor" << endl;
        }
        ~TunaDummyMember()
        {
            cout << "TunaDummyMember destructor" << endl;
        }
};

class Tuna: public Fish
{
    private:
        TunaDummyMember dummy;
    public:
        Tuna()
        {
            cout << "Tuna constructor" << endl;
        }
        ~Tuna()
        {
            cout << "Tuna destructor" << endl;
        }
};

int main()
{
    Tuna myDinner;
    return 0;
}
