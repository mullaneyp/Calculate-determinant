/*****************************************************
 ** Author: Patrick Mullaney
 ** Description:  Implementation file for determinant
 ** Date: 9/24/16
 ****************************************************/

#include "determinant.hpp"
#include <iostream>

using namespace std;

int determinant(int** matrixSquare, int matrixSize)
{
    int determinant;
    
    if(matrixSize == 2)
    {
    // If matrixSize is 2x2, use formula: ad-bc
    determinant = matrixSquare[0][0]*matrixSquare[1][1]-matrixSquare[0][1]*matrixSquare[1][0];
        
    // cout << "determinant: " << determinant << endl; ***for testing
    }
    
    if(matrixSize == 3)
    {
    // If matrixSize is 3x3 use forumula: a(ei-fh) - b(di-fg) + c(dh-eg)
    //                                      int a   - int b  +  int c
    //    0  1  2
    // 0 [a][b][c]
    // 1 [d][e][f]
    // 2 [g][h][i]
    
    int a = matrixSquare[0][0]*(matrixSquare[1][1]*matrixSquare[2][2]-matrixSquare[1][2]*matrixSquare[2][1]);
    
    int b = matrixSquare[0][1]*(matrixSquare[1][0]*matrixSquare[2][2]-matrixSquare[1][2]*matrixSquare[2][0]);

    int c = matrixSquare[0][2]*(matrixSquare[1][0]*matrixSquare[2][1]-matrixSquare[1][1]*matrixSquare[2][0]);
    
    determinant = a-b+c;
    
    //cout << "determinant: " << determinant << endl;  ***for testing
    }
    return determinant;
}