/*************************************************************************
	> File Name: listing9_15.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 30 Nov 2017 08:38:45 PM CST
 ************************************************************************/
#include <iostream>
#include <string>

using namespace std;

class Human
{
    private:
        friend class Utility;
        string name;
        int age;
    public:
        Human(string humansName, int humansAge)
        {
            name = humansName;
            age = humansAge;
        }
};

class Utility
{
    public:
        static void DisplayAge(const Human& person)
        {
            cout << person.age;
        }
};

int main()
{
    Human firstMan("Adam", 25);
    cout << "Accessing private member age via friend class: ";
    Utility::DisplayAge(firstMan);
    cout << endl;

     return 0;
}
