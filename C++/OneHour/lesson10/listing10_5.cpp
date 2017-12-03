/*************************************************************************
	> File Name: listing10_5.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Dec 2017 09:49:44 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Fish
{
    private:
        bool isFreshWaterFish;
    public:
        Fish(bool isFreshWaterFish):isFreshWaterFish(isFreshWaterFish){}
        
        void Swim()
        {
            if(isFreshWaterFish)
                cout << "Swims in lake" << endl;
            else
                cout << "Swims in sea" << endl;
        }
    
};

class Crap: public Fish
{
    public:
        Crap():Fish(true){}
        void Swim()
        {
            cout << "Crap Swims slow" << endl;
        }
};

class Tuna: public Fish
{
    public:
        Tuna(): Fish(false){}

        void Swim()
        {
            cout << "Tuna Swims real fast" << endl;
            cout << "In Tuna class invoke baseClass Method->";
            Fish::Swim();
        }
};


int main()
{
    Crap myLunch;
    Tuna myDinner;

    cout << "my food:" << endl;

    cout << "Lunch: ";
    myLunch.Swim();

    cout << "Dinner: ";
    myDinner.Swim();

    cout << "Fish Swim: ";
    myLunch.Fish::Swim();
    return 0;
}


