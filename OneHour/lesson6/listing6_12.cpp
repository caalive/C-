/*************************************************************************
	> File Name: listing6_12.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Nov 2017 09:49:24 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int someNums[] = {1, 101, -1, 40, 2040 };

    for (const int& aNum: someNums)
        cout << aNum << ' ';
    cout << endl;

    for (auto anElement : {5, 222, 10, -45, 2017})
        cout << anElement << ' ';
    cout << endl;

    char charArray [] = {'h', 'e','l','l','o'};
    for(auto aChar : charArray)
        cout << aChar << ' ';
    cout << endl;

    double morenums[] = {3.14, -1.3, 22, 10101};
    for (auto anElement : morenums)
    cout << anElement << ' ';
    cout << endl;

    string sayHello{"Hello World!"};
    for (auto anElement : sayHello)
        cout << anElement << ' ';
    cout << endl;

    return 0;
}
