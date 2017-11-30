/*************************************************************************
	> File Name: listing9_18.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 30 Nov 2017 09:59:36 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Human
{
    int age;
    public:
        constexpr Human(int humansAge) :age(humansAge){}
        constexpr int GetAge() const {return age;}
};

int main()
{
    constexpr Human somePerson(15);
    const int hisAge = somePerson.GetAge();

    Human anotherPerson(45); // not constant experession

    cout << "the person age: " << hisAge << endl;
    return 0;
}
