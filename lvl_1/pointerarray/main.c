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

    array = freeArray(array);

    int **matrix = createMatrix(rows,cols,value);

    printMatrix(matrix,rows,cols);

    matrix = freeMatrix(matrix, rows);

    return 0;

}