/*************************************************************************
	> File Name: listing3_9.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Nov 2017 01:37:27 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

enum CardinalDirections
{
    North = 25,
    South,
    East,
    West
};

int main()
{
    cout << "Displaying directions and their synbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl;
    
    CardinalDirections windDirection = South;
    cout << "Variable windDirection = " << windDirection << endl;

    return 0;
}
