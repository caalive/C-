/*************************************************************************
	> File Name: exercise4_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 21 Nov 2017 09:27:25 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    enum Square
    {
        Empty = 0,
        Pawn,
        Rook,
        Knight,
        Bishop,
        King,
        Queen
    };
    
    Square chessBoard[8][8];

    // Initialize the squares containing rooks
    chessBoard[0][0] = chessBoard[0][7] = Rook;
    chessBoard[7][0] = chessBoard[7][7] = Rook;
    
    int i = 0;

    for (; i < 8; i++)
    {
        int j = 0;
        //cout << "output i: " << i << endl;
        for (; j < 8; j++)
        {
           // cout << "output j: " << j << endl;
            cout << chessBoard[i][j] << endl;
        }
    }

    return 0;
}
