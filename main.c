#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

#include "Calculator.h"
#include "Calculator.c"

int main() {
    //Operating matrices are matrix1 & matrix2, result matrix is matrix3
    int matrix1[MATRIX][MATRIX], matrix2[MATRIX][MATRIX], matrix3[MATRIX][MATRIX];

    //Matrix dimensions : row = 0, column = 1
    int dim1[DIM], dim2[DIM], dim3[DIM];

    char operation;
    bool quit = false;

    while (!quit) {

        printf("MATRIX CALCULATOR:\n(+) Add\n(-) Subtract\n(*) Multiply\n(t) Transpose\n(x) Quit\n");

        //Get operation from user
        printf("ENTER OPERATION:");
        scanf(" %c", &operation);

        while (operation != '+' && operation != '-' &&
                operation != '*' && tolower(operation) != 't' && tolower(operation) != 'x') {
            printf("ENTER OPERATION:");
            scanf(" %c", &operation);
        }

        if (tolower(operation) != 'x') {
            //Perform first matrix data input
            dataInput(matrix1, dim1, 1, operation);

            if (tolower(operation) != 't')
                //Perform second matrix data input
                dataInput(matrix2, dim2, 2, operation);
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
                break;
            case 't':
            case 'T':
                trans(matrix1, matrix3, dim1, dim3);
                break;
            case 'x':
            case 'X':
                printf("\nQUIT CALCULATOR\n");
                quit = true;
                break;
        }

    }
}
