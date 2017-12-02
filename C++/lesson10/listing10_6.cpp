/*************************************************************************
	> File Name: listing10_6.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Dec 2017 10:12:29 AM CST
 ************************************************************************/

 #include <iostream>
 using namespace std;

 class Fish
 {
     public:
        void Swim()
        {
            cout << "Fish swims....!" << endl; 
        }
        
        void Swim(bool isFreshWaterFish) // overloaded version
        {
            if(isFreshWaterFish)
                cout << "Swims in lake" << endl;
            else
                cout << "Swims in sea" << endl;
        }
 };

class Tuna: public Fish
{
    public:
        void Swim()
        {
            cout << "Tuan Swims real fast" << endl;
        }
};

int main()
{
    Tuna myDinner;

    cout << "About my food" << endl;
    //myDinner.Swim(false); //failure: Tuna:: Swim() hides Fish::Swin(bol)
    myDinner.Swim();
    
    return 0;
}
