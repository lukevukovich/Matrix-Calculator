#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "Calculator.h"
#include "Calculator.c"

int main() {
    //Result matrix is matrixx3
    int matrix1[MATRIX][MATRIX], matrix2[MATRIX][MATRIX], matrix3[MATRIX][MATRIX];

    //Matrix dimensions - row = 0, column = 1
    int dim1[DIM], dim2[DIM], dim3[DIM];

    char operation;
    bool quit = false;

    while (!quit) {

        printf("Matrix Calculator:\n(+) Add\n(-) Subtract\n(*) Multiply\n(t) Transpose\n(x) Quit\n");

        printf("\nEnter operation:");
        scanf("%c", operation);

        while (operation != '+' && operation != '-' &&
               operation != '*' && operation != 't' && operation != 'x') {
            printf("Enter operation:");
            scanf("%c", operation);
        }

        switch (operation) {
            case '+':
                printf("\n- Chosen\n\n");
                break;
            case '-':
                printf("\n- Chosen\n\n");
                break;
            case '*':
                printf("\n- Chosen\n\n");
                break;
            case 't':
                printf("\n- Chosen\n\n");
                break;
            case 'x':
                printf("\n- Chosen\n\n");
                quit = true;
                break;
        }

    }
}
