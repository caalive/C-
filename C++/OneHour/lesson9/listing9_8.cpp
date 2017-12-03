/*************************************************************************
	> File Name: listing9_8.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Nov 2017 09:45:39 PM CST
 ************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
    private:
        char* buffer;
    public:
        MyString(const char* initString) // Constructor
        {
            if(buffer != NULL)
            {
                cout << "" << endl;
                buffer = new char [strlen(initString) + 1];
                strcpy(buffer, initString);
            }
            else
                buffer = NULL;
        }
        
        ~MyString() //Destructor
        {
            cout << "invoking destructor, cleaning up" << endl;
            if(buffer != NULL)
                delete [] buffer;
        }
        
    int GetLength()
    {
        return strlen(buffer);
    }

    const char* GetString()
    {
        return buffer;
    }
};

void UseMyString(MyString str)
{
    cout << "String buffer in MyString is " << str.GetLength();
    cout << " character long" << endl;

    cout << "buffer contains: " << str.GetString() << endl;
    return;
}

int main()
{
    MyString sayHello("Hello fron String Class");
    UseMyString(sayHello);
    return 0;
}
