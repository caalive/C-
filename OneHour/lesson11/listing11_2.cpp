/*************************************************************************
	> File Name: listing11_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 07:56:46 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Fish
{
    public:
        virtual void Swim()
        {
            cout << "Fish swims!" << endl;
        }
};

class Tuna: public Fish
{
    public:
        void Swim()
        {
            cout << "Tuna swims!" << endl;
        }
};

class Crap: public Fish
{
    public:
        void Swim()
        {
            cout << "Crap swims!" << endl;
        }
};

void MakeFishSwim(Fish& inputFish)
{
    inputFish.Swim();
}

int main()
{
    Tuna myDinner;
    Crap myLunch;

    MakeFishSwim(myDinner);
    MakeFishSwim(myLunch);
    return 0;
}
