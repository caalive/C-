/*************************************************************************
	> File Name: listing9_6.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 27 Nov 2017 11:09:20 PM CST
 ************************************************************************/

 #include <iostream>
 #include <string>

 using namespace std;

 class Human
 {
     private:
        int age;
        string name;
    public:
        Human(string humansName = "Adam", int humansAge = 25)
            :name(humansName), age(humansAge)
        {
            cout << "Constroducted a human called " << name;
            cout << ", " << age << " years old" << endl;
        }
 };

int main()
{
    Human adam;
    Human eve("Eve", 28);
    return 0;
}
