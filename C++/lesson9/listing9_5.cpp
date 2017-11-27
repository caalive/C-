/*************************************************************************
	> File Name: listing9_5.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 27 Nov 2017 10:37:19 PM CST
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
        Human(string humansName, int humansAge)
        {
            name = humansName;
            age = humansAge;
            cout << "Overloaded constructor creates ";
            cout << " of age " << age << endl;
        
        }
        void IntroduceSelf()
        {
            cout << "I am " + name << " and am ";
            cout << age << " years old" << endl;
        }
};

int main()
{
    Human firstMan("Adam", 25);
    Human firstWoman("Eve", 28);

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
    return 0;
}


