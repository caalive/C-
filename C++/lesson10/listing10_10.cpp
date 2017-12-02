/*************************************************************************
	> File Name: listing10_10.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 11:39:00 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Mammal
{
    public:
        void FeedBabyMilk()
        {
            cout << "Mamml: Baby says glug!" << endl;
        }
};

class Reptile
{
    public:
        void SpitVenom()
        {
            cout << "Reptile: Shoo enemy! Spits venom!" << endl;
        }
};


class Bird
{
    public:
        void LayEggs()
        {
            cout << "Bird: Laid my eggs, am lighter now!" << endl;
        }
};


class Platyopus: public Mammal, public Bird, public Reptile
{
    public:
        void Swim()
        {
            cout << "Platypus: Voila, I can swim!" << endl;
        }
};


int main()
{
    Platyopus realFreak;
    realFreak.LayEggs();
    realFreak.FeedBabyMilk();
    realFreak.SpitVenom();
    realFreak.Swim();

    return 0;
}
