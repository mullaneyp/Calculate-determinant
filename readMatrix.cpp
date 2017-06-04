/*****************************************************
 ** Author: Patrick Mullaney
 ** Description:  Implementation file for readMatrix
 ** Date: 9/24/16
 *****************************************************/

#include "readMatrix.hpp"
#include <iostream>

using namespace std;

// readMatrix() will have a pointer to a 2D array and an integer as parameters. integer is size square. will prompt the user to fill a square matrix, 2x2 or 3x3.

void readMatrix(int** matrixSquare, int matrixSize)
{
    int num;
    // cout << "readMatrix test: " << endl;
    
 cout << "Please enter " << matrixSize*matrixSize << " values for the square matrix." << endl;
 
    for(int row = 0; row < matrixSize; row++)
        for(int col = 0; col < matrixSize; col++)
            {
                cin >> num;
                matrixSquare[row][col] = num;
            }
}