/*************************************************************************
	> File Name: listing6_14.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Nov 2017 10:21:47 PM CST
 ************************************************************************/

 #include <iostream>
 using namespace std;

 int main()
 {
    const int ARRAY_LEN1 = 3;
    const int ARRAY_LEN2 = 2;

    int myNumbers1[ARRAY_LEN1] = {35, -3, 0};
    int myNumbers2[ARRAY_LEN2] = {20, -1};

    cout << "Multiplying each int in myNumbers1 by each in myNumbers2: " << endl;
    for(int index1 = 0; index1 < ARRAY_LEN1; ++index1)
     for(int index2 = 0; index2 < ARRAY_LEN2; ++index2)
        cout << myNumbers1[index1] << " X " << myNumbers2[index2]\
             << " = " << myNumbers1[index1] * myNumbers2[index2] << endl;

     return 0;
 }

