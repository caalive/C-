/*************************************************************************
	> File Name: listing10_4.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Dec 2017 09:33:57 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Fish
{
    private:
        bool isFreshWaterFish;

    public:
        // constructor of Fish by a default parameter    
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
        Tuna(): Fish(false){}
        
        void Swim()
        {
            cout << "Tuna swims real fast" << endl;
        }
};


class Crap: public Fish
{
    public:
        Crap(): Fish(true){}
        
        void Swim()
        {
            cout << "Crap swims real slow" << endl;
        }
};

int main()
{
    Crap myLunch;
    Tuna myDinner;
    
    cout << "About my food: " << endl;
    
    cout << "Lunch: ";
    myLunch.Swim();

    cout << "Dinner: ";
    myDinner.Swim();

    return 0;
}

