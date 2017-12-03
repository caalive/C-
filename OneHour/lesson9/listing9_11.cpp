/*************************************************************************
	> File Name: listing9_11.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Nov 2017 11:12:55 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class MonsterDB
{
    private:
        ~MonsterDB(){}; // private destructor prevents instances on stack
    public:
        static void DestroyInstance(MonsterDB* pInstance)
        {
            delete pInstance;   // member can invoke private destructor
        }

        void DoSomething(){} // sample empty member method

};

int main()
{
    MonsterDB* myDB = new MonsterDB(); // on heap;
    myDB->DoSomething();

    //delete myDB;  //private destructor cannot be invoked
    // use static member to release memory
    MonsterDB::DestroyInstance(myDB);
    
    return 0;
}
