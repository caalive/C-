/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 11:57:18 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Bird
{
    protected:
        bool canFly;
    
        Bird()
        {
            canFly = false;
            cout << "now can canFly is: " << canFly << endl;
        }
        void fly()
        {
            cout << "I can fly, do you? " << endl;
        }
        
};

class beeBird : private Bird
{
    public:
        void swim()
        {
            canFly = true;
            cout << "now canFly is on beeBird: " << canFly << endl;
            cout << "i can swim" << endl;

            fly();
        }
};

int main()
{
    beeBird sh;
    sh.swim();
}
