#include <stdio.h>
#include "Calculator.h"

void dataInput(int m[][MATRIX], int d[], char message[], char op) {
    printf("\n(%c) MATRIX %s INPUT:\n", tolower(op), message);

    printf("Enter Matrix Rows (1-%d):", MATRIX);
    scanf("%d", &d[0]);

    while (d[0] < 1 || d[0] > 10) {
        printf("Enter Matrix Rows (1-%d):", MATRIX);
        scanf("%d", &d[0]);
    }

    printf("Enter Matrix Columns (1-%d):", MATRIX);
    scanf("%d", &d[1]);
    while (d[1] < 1 || d[1] > 10) {
        printf("Enter Matrix Columns (1-%d):", MATRIX);
        scanf("%d", &d[1]);
    }

    printf("\n");

    int i, j;

    for (i = 0; i < d[0]; i++) {
        for (j = 0; j < d[1]; j++) {
            printf("Enter Matrix[%d][%d] Value:", i, j);
            scanf("%d", &m[i][j]);

            while (m[i][j] > MAXVAL || m[i][j] < -(MAXVAL)) {
                printf("Enter Matrix[%d][%d] Value:", i, j);
                scanf("%d", &m[i][j]);
            }
        }
    }
}

//Rows must be equal and columns must be equal
void add(int m1[][MATRIX], int m2[][MATRIX], int m3[][MATRIX],
         int d1[], int d2[], int d3[]) {
    int i, j;

    if (d1[0] == d2[0] && d1[1] == d2[1]) {

        d3[0] = d1[0];
        d3[1] = d1[1];

        for (i = 0; i < d3[0]; i++) {
            for (j = 0; j < d3[1]; j++) {
                m3[i][j] = m1[i][j] + m2[i][j];
            }
        }

        printMatrix(m1, d1, "1", '+');
        printMatrix(m2, d2, "2", '+');
        printMatrix(m3, d3, "RESULT", '+');
    }
    else
        printf("\nINOPERABLE MATRIX DIMENSIONS\n");

}

//Row sizes must be equal and column sizes must be equal
void sub(int m1[][MATRIX], int m2[][MATRIX], int m3[][MATRIX],
         int d1[], int d2[], int d3[]) {
    int i, j;

    if (d1[0] == d2[0] && d1[1] == d2[1]) {

        d3[0] = d1[0];
        d3[1] = d1[1];

        for (i = 0; i < d3[0]; i++) {
            for (j = 0; j < d3[1]; j++) {
                m3[i][j] = m1[i][j] - m2[i][j];
            }
        }

        printMatrix(m1, d1, "1", '-');
        printMatrix(m2, d2, "2", '-');
        printMatrix(m3, d3, "RESULT", '-');
    }
    else
        printf("\nINOPERABLE MATRIX DIMENSIONS\n");

}

//Column size of first matrix must equal row size of second matrix
void mult(int m1[][MATRIX], int m2[][MATRIX], int m3[][MATRIX],
          int d1[], int d2[], int d3[]) {
    if (d1[1] == d2[0]) {
        int pivot = d1[1];
        d3[0] = d1[0];
        d3[1] = d2[1];

        int i, j, k, tot = 0;

        for (i = 0; i < d3[0]; i++) {
            for (j = 0; j < d3[1]; j++) {
                for (k = 0; k < pivot; k++) {
                    tot += m1[i][k] * m2[k][j];
                }
                m3[i][j] = tot;
                tot = 0;
            }
        }

        printMatrix(m1, d1, "1", '*');
        printMatrix(m2, d2, "2", '*');
        printMatrix(m3, d3, "RESULT", '*');
    }
    else
        printf("\nINOPERABLE MATRIX DIMENSIONS\n");

}

void trans(int m1[][MATRIX], int m2[][MATRIX],
           int d1[], int d2[]) {
    int i, j;

    d2[0] = d1[1];
    d2[1] = d1[0];

    for (i = 0; i < d2[0]; i++) {
        for (j = 0; j < d2[1]; j++) {
            m2[i][j] = m1[j][i];
        }
    }

    printMatrix(m1, d1, "1", 't');
    printMatrix(m2, d2, "RESULT", 't');
}

//Prints matrix in standard/readable format
void printMatrix(int m1[][MATRIX], int d1[], char message[], char op) {
    int i, j;

    printf("\n(%c) MATRIX %s:\n", tolower(op), message);

    for (i = 0; i < d1[0]; i++) {
        printf("[");
        for (j = 0; j < d1[1]; j++) {
            printf("%d", m1[i][j]);
            if (j + 1 != d1[1])
                printf(", ");
        }
        printf("]\n");
    }
}

void resetMatrix(int m1[][MATRIX], int m2[][MATRIX], int m3[][MATRIX]) {
    int i, j;

    for (i = 0; i < MATRIX; i++) {
        for (j = 0; j < MATRIX; j++) {
            m1[i][j] = 0;
            m2[i][j] = 0;
            m3[i][j] = 0;
        }
    }
}