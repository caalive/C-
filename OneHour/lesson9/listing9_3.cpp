/*************************************************************************
	> File Name: listing9_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 27 Nov 2017 09:14:51 PM CST
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
        Human() // constructor
        {
            age = 1; // initialization
            cout << "Constructored an instance of class Human" << endl;
        }

        void SetName(string humansName)
        {
            name = humansName;
        }
        void SetAge(int humansAge)
        {
            age = humansAge;
        }
        void IntroduceSelf()
        {
            cout << "I am " + name << " and am ";
            cout << age << " years old" << endl;
        }
};

int main()
{
    Human firstWoman;
    firstWoman.SetName("Eve");
    firstWoman.SetAge(28);

    firstWoman.IntroduceSelf();
    return 0;
}
