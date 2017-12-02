/*************************************************************************
	> File Name: listing11_7.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 09:46:44 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Animal
{
    public:
        Animal()
        {
            cout <<"Animal constructor" << endl;
        }
        int age;
};

class Mammal:public Animal{};
class Bird:public Animal{};
class Reptile: public Animal{};

class Platypus:public Mammal, public Bird, public Reptile
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
    // age is ambiguous as there are three instances of base Animal
    // duckBilledP.age = 25;
    return 0;
}
