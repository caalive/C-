/*************************************************************************
	> File Name: exercise_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Nov 2017 02:25:25 PM CST
 ************************************************************************/

#include <iostream>

int main()
{
    using namespace std;
    const float Pi = 22.0 / 7;
    cout << "Enter the radius of the circle: ";
    float radius = 0;
    cin >> radius;
    cout << "The area of the circle: " << int(Pi * radius * radius) << endl;
    cout << "The circumference of the circle: " << int(Pi * 2 * radius) << endl;

    return 0;
}
