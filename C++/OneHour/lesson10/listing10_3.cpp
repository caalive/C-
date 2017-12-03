/*************************************************************************
	> File Name: listing10_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Dec 2017 09:16:46 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Fish
{
    protected:
        bool isFreshWaterFish; // accessible only to base class

    public:
        // Fish constructor
        Fish(bool isFreshWaterFish): isFreshWaterFish(isFreshWaterFish){}

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
        Tuna(): Fish(false){} // constructor initializes base
};

class Crap: public Fish
{
    public:
        Crap(): Fish(true) {}
};

int main()
{
    Crap myLunch;
    Tuna myDinner;

    cout << "About my food" << endl;

    cout << "Lunch: ";
    myLunch.Swim();

    cout <<"Dinner: ";
    myDinner.Swim();


    return 0;
}
