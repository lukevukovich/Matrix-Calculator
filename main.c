#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

#include "Calculator.h"

int main() {
    //Operating matrices are matrix1 & matrix2, result matrix is matrix3
    int matrix1[MATRIX][MATRIX], matrix2[MATRIX][MATRIX], matrix3[MATRIX][MATRIX];

    //Matrix dimensions : row = 0, column = 1
    int dim1[DIM], dim2[DIM], dim3[DIM];

    //Keeps track of number of times program runs through while loop
    int programCount = 0;

    char operation, choice;
    bool quit = false, keepPrevData = false;

    while (!quit) {

        printf("\nMATRIX CALCULATOR:\n(+) Add\n(-) Subtract\n(*) Multiply\n(t) Transpose\n(x) Quit\n");

        //Get operation input
        operation = getOperation();

        //Only ask to keep previous data after first pass through
        if (programCount > 0 && tolower(operation) != 'x') {
            //Get input to keep previous data
            choice = getChoice();

            if (choice == 'y')
                keepPrevData = true;
            else
                keepPrevData = false;
        }

        if (!keepPrevData) {
            //Set all matrix values to 0
            resetMatrix(matrix1, matrix2, matrix3);

            if (tolower(operation) != 'x') {
                //Perform first matrix data input
                dataInput(matrix1, dim1, "1", operation);

                if (tolower(operation) != 't')
                    //Perform second matrix data input
                    dataInput(matrix2, dim2, "2", operation);
            }
        }

        //Perform corresponding operation
        switch (operation) {
            case '+':
                add(matrix1, matrix2, matrix3, dim1, dim2, dim3);
                break;
            case '-':
                sub(matrix1, matrix2, matrix3, dim1, dim2, dim3);
                break;
            case '*':
                mult(matrix1, matrix2, matrix3, dim1, dim2, dim3);
                break;
            case 't':
            case 'T':
                trans(matrix1, matrix3, dim1, dim3);
                break;
            case 'x':
            case 'X':
                //Quit and break if x is entered
                printf("\nQUIT CALCULATOR\n");
                quit = true;
                break;
        }

        programCount++;

    }

    sleep(1);
}
