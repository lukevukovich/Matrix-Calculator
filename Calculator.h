#ifndef MATRIXCALCULATOR_CALCULATOR_H
#define MATRIXCALCULATOR_CALCULATOR_H

#define MATRIX 10
#define DIM 2

void dataInput(int[][MATRIX], int[]);
void add(int[][MATRIX], int[][MATRIX], int[][MATRIX], int[], int[], int[]);
void sub(int[][MATRIX], int[][MATRIX], int[][MATRIX], int[], int[], int[]);
void mult(int[][MATRIX], int[][MATRIX], int[][MATRIX], int[], int[], int[]);
void trans(int[][MATRIX], int[][MATRIX], int[], int[]);
void printResult(int[][MATRIX], int[]);

#endif //MATRIXCALCULATOR_CALCULATOR_H
