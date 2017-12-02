/*************************************************************************
	> File Name: listing11_8.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 09:56:38 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Animal
{
    public:
        Animal()
        {
            cout << "Animal constructor" << endl;
        }
        int age;
};

class Mammal:public virtual Animal{};
class Bird:public virtual Animal{};
class Reptile:public virtual Animal{};

class Platypus : public Mammal, public Bird, public Reptile
{
    public:
        Platypus()
        {
            cout << "Platypus constructor" << endl;
        }
};

int main()
{
    Platypus duckBilledP;
    duckBilledP.age = 25;
    return 0;
}
