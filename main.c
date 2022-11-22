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

        printf("Matrix Calculator:\n(+) Add\n(-) Subtract\n(*) Multiply\n(t) Transpose\n(x) Quit\n");

        printf("Enter operation:");
        scanf("%c", &operation);

        while (operation != '+' && operation != '-' &&
               operation != '*' && operation != 't' && operation != 'x') {
            scanf("%c", &operation);
        }

        printf("\n");

        switch (operation) {
            case '+':
                break;
            case '-':
                break;
            case '*':
                break;
            case 't':
                break;
            case 'x':
                quit = true;
                break;
        }

    }
}
