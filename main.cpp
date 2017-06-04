/*****************************************************
 ** Author: Patrick Mullaney
 ** Description:  Main file for program that asks user
 ** to enter matrix values and calculates determinant.
 ** Date: 9/27/16
 ****************************************************/

#include <iostream>
#include "readMatrix.hpp"
#include "determinant.hpp"

using namespace std;

int main() {
  
    int matrixSize;
    
    // program uses readMatrix() to prompt user to enter 4 or 9 values to fill array, calculate determinant using determinant(), display both array and determinant to user.
    
    cout << "Would you like to enter 4 or 9 values for a square matrix?" << endl;
    cout << "Press 2:  4 values, 2x2 square." << endl;
    cout << "Press 3:  9 values, 3x3 square." << endl;
    cin >> matrixSize;
    
    int** matrixSquare = new int*[matrixSize];
    for(int row = 0; row < matrixSize; row++)
        matrixSquare[row] = new int[matrixSize];
    
    // Call readMatrix to prompt user to enter numbers into the matrix.
    readMatrix(matrixSquare, matrixSize);
    // cout << "matrixSquare: " << matrixSquare[1][1] << endl; ***used for testing
    
    // Call determinant to calculate determinant.
    int d = determinant(matrixSquare, matrixSize);
    
    // Display both matrix and determinant.  Array should not be displayed in a single line.
    
    cout << "Matrix: " << endl;
    if(matrixSize == 2)
    {
        cout << matrixSquare[0][0] << " " << matrixSquare[0][1] << endl;
        cout << matrixSquare[1][0] << " " << matrixSquare[1][1] << endl;
    }
    
    if(matrixSize == 3)
    {
        cout << matrixSquare[0][0] << " " << matrixSquare[0][1] << " " << matrixSquare[0][2] << endl;
        cout << matrixSquare[1][0] << " " << matrixSquare[1][1] << " " << matrixSquare[1][2] << endl;
        cout << matrixSquare[2][0] << " " << matrixSquare[2][1] << " " << matrixSquare[2][2] << endl;
    }
    
    cout << "Determinant: " << d << endl;

    
    // Deallocate memory
    for(int row = 0; row < matrixSize; row++)
    {
        delete [] matrixSquare[row];
    }
    delete [] matrixSquare;
    
    // cout << "deallocated? " << matrixSquare[0][1] << endl; for testing.
    
    return 0;
}
