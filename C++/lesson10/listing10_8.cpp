/*************************************************************************
	> File Name: listing10_8.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 10:49:09 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Motor
{
    public:
        void SwitchIgnition()
        {
            cout << "Ignition ON" << endl;
        }
        void PumpFule()
        {
            cout << "Fule in cylinders" << endl;
        }

        void FireCylinders()
        {
            cout << "Vroooom" << endl;
        }
};

class Car: protected Motor // private inheritance
{
    public:
        void Move()
        {
            SwitchIgnition();
            PumpFule();
            FireCylinders();
        }

};

class RaceCar: protected  Car
{
    public:
        RaceCar()
        {
            cout << "RaceCar constructor" << endl;
        }
        
        void Move()
        {
            PumpFule();
        }
};


int main()
{
    Car myDreamCar;
    myDreamCar.Move();
    
    RaceCar ra;
    ra.Move();

    return 0;
}
