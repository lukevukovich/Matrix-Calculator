#include <stdbool.h>
#include <stdio.h>
#include "Calculator.h"
#include "Calculator.c"

int main() {
    //Result matrix is matrix3
    int matrix1[MATRIX][MATRIX], matrix2[MATRIX][MATRIX], matrix3[MATRIX][MATRIX];

    //Matrix dimensions - row = 0, column = 1
    int dim1[DIM], dim2[DIM], dim3[DIM];

    char operation;
    bool quit = false;

    while (!quit) {

        printf("MATRIX CALCULATOR:\n(+) Add\n(-) Subtract\n(*) Multiply\n(t) Transpose\n(x) Quit\n");

        //Get operation from user
        printf("    Enter Operation:");
        scanf(" %c", &operation);

        while (operation != '+' && operation != '-' &&
               operation != '*' && operation != 't' && operation != 'x') {
            printf("    Enter Operation:");
            scanf(" %c", &operation);
        }

        if (operation != 'x') {
            //Perform first matrix data input
            dataInput(matrix1, dim1);
        }

        switch (operation) {
            case '+':
                dataInput(matrix2, dim2);
                add(matrix1, matrix2, matrix3, dim1, dim2, dim3);
                break;
            case '-':
                dataInput(matrix2, dim2);
                sub(matrix1, matrix2, matrix3, dim1, dim2, dim3);
                break;
            case '*':
                dataInput(matrix2, dim2);
                break;
            case 't':

                break;
            case 'x':
                printf("\nQUIT CALCULATOR\n");
                quit = true;
                break;
        }

    }
}
