/*************************************************************************
	> File Name: listing11_6.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 09:27:56 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Fish
{

    public:
        // define a pure virtual function Swim
        virtual void Swim() = 0;
};

class Tuna: public Fish
{
    public:
        void Swim()
        {
            cout << "Tuna swims in the sea! " << endl;
        }
};

class Crap: public Fish
{
    void Swim()
    {
        cout << "Crap swims slow in the lake!" << endl;
    }
};

void MakeFishSwim(Fish& inputFish)
{
    inputFish.Swim();
}

int main()
{
    //Fish myFish;  // Fish, cannot instantiate an ABC
    Crap myLunch;
    Tuna myDinner;

    MakeFishSwim(myLunch);
    MakeFishSwim(myDinner);

   return 0; 
}





