/*************************************************************************
	> File Name: listing9_7.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 28 Nov 2017 09:52:57 PM CST
 ************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
    private:
        char* buffer;
    public:
        MyString(const char* initString)
        {
            if(initString != NULL)
            {
                buffer = new char [strlen(initString) + 1];
                strcpy(buffer, initString);
            }
            else
                buffer = NULL;
        }

        ~MyString()
        {
            cout << "Invoking destructor, clearing up" << endl;
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

int main()
{
    MyString sayHello("Hello from Strig Class");
    cout << "String buffer in sayHello is " << sayHello.GetLength();
    cout << " characters long" << endl;

    cout << "Buffer contains: " << sayHello.GetString() << endl;
    return 0;
}


