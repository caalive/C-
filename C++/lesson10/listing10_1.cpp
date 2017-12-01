/*************************************************************************
	> File Name: listing10_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Dec 2017 08:46:38 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Fish
{
    public:
        bool isFreshWaterFish;
    void Swim()
    {
        if(isFreshWaterFish)
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
            isFreshWaterFish = false;
        }
};

class Crap: public Fish
{
    public:
        Crap()
        {
            isFreshWaterFish = true;
        }
};


int main()
{
    Crap myLunch;
    Tuna myDinner;

    cout << "About my food:" << endl;

    cout << "Lunch: ";
    myLunch.Swim();

    cout << "Dinner: ";
    myDinner.Swim();

    return 0;
}


