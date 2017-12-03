/*************************************************************************
	> File Name: listing11_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 07:47:57 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Fish
{
    public:
        void Swim()
        {
            cout << "Fish swims! " << endl; 
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


void MakeFishSwim(Fish& inputFish)
{
    // calling Fish::Swim
    inputFish.Swim();
}


int main()
{
    Tuna myDinner;
    myDinner.Swim();
    MakeFishSwim(myDinner);
    return 0;
}










