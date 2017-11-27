/*************************************************************************
	> File Name: listing9_4.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 27 Nov 2017 09:32:49 PM CST
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Human
{
    private:
        string name;
        int age;
    public:
        Human() // default constructor
        {
            age = 0; // initialized to ensure no junk value
            cout << "Default constructor: name and age not set " << endl;
        } 
        
        Human(string humansName, int humansAge) // overloaded
        {
            name = humansName;
            age = humansAge;
            cout << "Overloaded constructor creates ";
            cout << name << " of " << age << " years " << endl;
        }
};


int main()
{
    Human firstMan; // use default constructor 
    Human firstWoman("Eve", 20); // Use overloaded constructor
}
