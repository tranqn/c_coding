#include <stdio.h>
#include <stdlib.h>
#include "TQ.h"


int main()
{
    unsigned int cols = 3;

    unsigned int rows = 2;

    int value = 1;

    int *array = createArray(cols, value);
    printArray(array, cols);
    printf("\n");

    int **matrix = createMatrix(rows,cols,value);
    printMatrix(matrix,rows,cols);
    printf("\n");

    int **tp_matrix = transposeMatrix(matrix, cols, rows);
    printMatrix(tp_matrix, cols, rows);
    printf("\n");

    tp_matrix = freeMatrix(tp_matrix, cols);
    matrix = freeMatrix(matrix, rows);
    array = freeArray(array);

    return 0;
}
