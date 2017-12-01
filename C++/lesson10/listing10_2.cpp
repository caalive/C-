/*************************************************************************
	> File Name: listing10_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Dec 2017 08:59:48 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Fish
{
    protected:
        bool isFreashWater;

    public:
        void Swim()
        {
            if(isFreashWater)
                cout << "Swims in lake" << endl;
            else
                cout << "Swims in sea" << endl;
        }
};

class Tuna: public Fish
{
    public:
        Tuna()
        {
            isFreashWater = false;
        }
};


class Crap: public Fish
{
    public:
        Crap()
        {
            isFreashWater = false;
        }
};


int main()
{
    Crap myLunch;
    Tuna myDinner;

    cout << "About my food" << endl;
    cout << "Lunch: ";
    myLunch.Swim();

    cout << "Dinner: ";
    myDinner.Swim();

    // are not accessible from outside the class hierarchy
    //myLunch.isFreashWater = false;
    return 0;
}

