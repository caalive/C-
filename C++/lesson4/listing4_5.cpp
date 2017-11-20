/*************************************************************************
	> File Name: listing4_5.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 20 Nov 2017 10:58:24 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char sayHello[] = {'H', 'e', 'l', 'l', 'o',' ', 
                       'w','o','r','l','d','\0'};

    cout << sayHello << endl;
    cout << "Size of array: " << sizeof(sayHello) << endl;

    cout << "Replacing space with null" << endl;
    sayHello[5] = '\0';
    cout << sayHello << endl;
    cout << "Size of array: " << sizeof(sayHello) << endl;

    return 0;
}
