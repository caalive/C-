/*************************************************************************
	> File Name: listing4_7.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 21 Nov 2017 08:57:35 PM CST
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string greetString ("Hello std:: string!");
    cout << greetString << endl;

    cout << "Enter a line of text: " << endl;
    string firstLine;

    cout << "Enter another: " << endl;
    string secondLine;

    getline(cin, secondLine);

    cout << "Result of concatenation: " << endl;
    string concatString = firstLine + " " + secondLine;
    cout << concatString << endl;

    cout << "Copy of concatenated string: " << endl;
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;

    cout << "Length of concat string: " << concatString.length() << endl;
    return 0;

}
