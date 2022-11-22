#include <stdbool.h>
#include <stdio.h>
#include "Calculator.h"

void dataInput(int m[][MATRIX], int d[]) {
    printf("\nMATRIX INPUT:\n");

    printf("Enter matrix rows:");
    scanf("%d", &d[0]);

    printf("Enter matrix columns:");
    scanf("%d", &d[1]);
    printf("\n");

    int i, j;

    for (i = 0; i < d[0]; i++) {
        for (j = 0; j < d[1]; j++) {
            printf("Enter matrix[%d][%d] value:", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

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

        printResult(m3, d3);
    }
    else
        printf("\nINVALID MATRIX DIMENSIONS\n\n");

}

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

        printResult(m3, d3);
    }
    else
        printf("\nINVALID MATRIX DIMENSIONS\n\n");

}

void mult(int m1[][MATRIX], int m2[][MATRIX], int m3[][MATRIX],
          int d1[], int d2[], int d3[]) {

}

void trans(int m1[][MATRIX], int m2[][MATRIX],
           int d1[], int d2[]) {

}

void printResult(int m1[][MATRIX], int d1[]) {
    int i, j;

    printf("\nRESULT MATRIX:\n");

    for (i = 0; i < d1[0]; i++) {
        for (j = 0; j < d1[1]; j++) {
            printf("Result matrix[%d][%d] value: %d\n", i, j, m1[i][j]);
        }
    }

    printf("\n");
}