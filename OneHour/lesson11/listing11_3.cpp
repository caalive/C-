/*************************************************************************
	> File Name: listing11_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 08:09:27 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Fish
{
    public:
        Fish()
        {
            cout << "Constructor Fish" << endl;
        }
        ~Fish()
        {
            cout << "Destoryed Fish" << endl;
        }
};

class Tuna: public Fish
{
    public:
        Tuna()
        {
            cout << "Constructor Tuna" << endl;
        }
        ~Tuna()
        {
            cout << "Destroyed Tuna" << endl;
        }
};

void DeleteFishMemory(Fish* pFish)
{
    delete pFish;
}

int main()
{
    cout << "Allocting a Tuna on the free store:" << endl;
    Tuna* pTuna = new Tuna;
    cout <<"Deleting the Tuna: " << endl;
    DeleteFishMemory(pTuna);

    cout << "Instantiating a Tuna on the stack:" << endl;
    Tuna myDinner;
    cout << "Automic destruction as it goes out of scop: " << endl;

    return 0;
}
