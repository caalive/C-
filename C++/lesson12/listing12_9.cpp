/*************************************************************************
	> File Name: listing12_9.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Dec 2017 02:45:51 PM CST
 ************************************************************************/

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class MyString
{
    private:
        char* buffer;
        //private default constructor
        MyString(){}
    public:
        //constructor
        MyString(const char* initialInput)
        {
            if(initialInput  != NULL)
            {
                buffer = new char [strlen(initialInput) + 1];
                strcpy(buffer, initialInput);
            }
            else
            {
                buffer = NULL;
            }
        }
        
        // copy construcotr: insert from Listing 9.9 here
        MyString(const MyString& copySource)
        {
            buffer = NULL;
            cout << "Copy constructor: copying from MyString" << endl;
            if(copySource.buffer != NULL)
            {
                buffer = new char [strlen(copySource.buffer) + 1];
                strcpy(buffer, copySource.buffer);
            }
        }

        //copy assignment operator: insert  fron Lising12.8 here
        MyString& operator = (const MyString& copySource)
        {
            if((this != &copySource) && (copySource.buffer != NULL))
            {
                if(buffer != NULL)
                    delete [] buffer;
                buffer = new char [strlen(copySource.buffer) + 1];
                strcpy(buffer, copySource.buffer);
            }
        }
        
        const char& operator [] (int index) const
        {
            if(index < GetLength())
                return buffer[index];
        }

        //Destrucotr
        ~MyString()
        {
            if(buffer != NULL)
                delete [] buffer;
        }
        
        int GetLength() const
        {
            return strlen(buffer);
        }
        
        operator const char*()
        {
            return buffer;
        }
};

int main()
{
    cout << "Type a statement: ";
    string strInput;
    getline(cin, strInput);

    MyString youSaid(strInput.c_str());

    cout << "Using operator[] for displaying your input: " << endl;

    for(int index = 0; index < youSaid.GetLength(); ++index)
    {
        cout << youSaid[index] << " ";
    }
    cout << endl;

    cout << "Enter index 0 - " << youSaid.GetLength() - 1 << " : ";
    int index = 0;
    cin >> index;

    cout << "Input character at zero-based position: " << index;
    cout << " is: " << youSaid[index] << endl;
    
    return 0;
}
