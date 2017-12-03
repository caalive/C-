/*************************************************************************
	> File Name: listing11_4.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 08:28:59 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Fish
{
    public:
        Fish()
        {
            cout <<"Constructor Fish" << endl;
        }
        virtual ~Fish()
        {
            cout << "Destory Fish" << endl;
        }
};


class Tuna: public Fish
{
    public:
        Tuna()
        {
            cout << "Contrucotor Tuna" << endl;
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
    cout << "Allocating a Tuna on the free store:" << endl;
    Tuna* pTuna = new Tuna;
    cout << "Deleting the Tuna: " << endl;
    DeleteFishMemory(pTuna);

    cout << "Instantiaing a Tuna on the stack:" << endl;
    Tuna myDinner;

    cout << "Automatic destruction as it goes out of scop: " << endl;

    return 0;
}

