/*************************************************************************
	> File Name: listing9_12.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Nov 2017 11:27:08 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Human
{
    private:
        int age;
    public:
        // explict constructor blocks implicit conversions
        explicit Human(int humansAge) : age(humansAge){}
        
};

void DoSomething(Human person)
{
     cout << "Human sent did something" << endl;
    return;
}

int main()
{
    Human kid(10);  // explicit conversion is OK
    Human anotherKid = Human(11); //explicit, OK
    DoSomething(kid); //OK

    //Human anotherKid2 = 11;  //failure: implicit conversion not OK
    //Dosomething(10);  // implicit conversion
    
    return 0;
}
