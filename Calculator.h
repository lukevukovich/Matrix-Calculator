#ifndef MATRIXCALCULATOR_CALCULATOR_H
#define MATRIXCALCULATOR_CALCULATOR_H

//Max number of rows/columns
#define MATRIX 10

//Size of dimension arrays : 0 = rows, 1 = cols
#define DIM 2

//Max matrix value allowed
#define MAXVAL 999

//Get data input from single matrix
void dataInput(int[][MATRIX], int[], char[], char);
//Takes in matrix, dimension, matrix message, and matrix operation

//Get operation input from user
char getOperation();

//Get user choice to keep previous data
char getChoice();

//Matrix operations
void add(int[][MATRIX], int[][MATRIX], int[][MATRIX], int[], int[], int[]);
void sub(int[][MATRIX], int[][MATRIX], int[][MATRIX], int[], int[], int[]);
void mult(int[][MATRIX], int[][MATRIX], int[][MATRIX], int[], int[], int[]);
void trans(int[][MATRIX], int[][MATRIX], int[], int[]);
//Takes in matrices being operated on, result matrix, and their dimensions

//Print formatted matrix
void printMatrix(int[][MATRIX], int[], char[], char);
//Takes in matrix, dimension, matrix message, and matrix operation

//Reset all matrix values to 0
void resetMatrix(int[][MATRIX], int[][MATRIX], int[][MATRIX]);
//Takes in all three matrices

#endif //MATRIXCALCULATOR_CALCULATOR_H
