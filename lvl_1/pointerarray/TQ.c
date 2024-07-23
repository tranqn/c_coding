#include <stdio.h>
#include <stdlib.h>
#include "TQ.h"

int getNumberFromUser()
{
    int number_from_user;

    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user;
}

int minimum_c(int a, int b)
{
    if(a > b)
    {
        return b;
    }
    else{
        return a;
    }
}

int maximum_c(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else{
        return b;
    }
}

float mean_c(int a, int b)
{
    float result = ((float)(a + b)) / 2.0f;

    return result;
}

int minArray(int *a, int len)
{
    int min = a[0];

    for(int i = 0; i < len; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int maxArray(int *a, int len){
    int max = a[0];

        for(int i = 0; i < len; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        return max;
}

float meanArray(int *a, int len){
    float total;
    float result;

    for(int i = 0; i < len; i++)
    {
        total = total + a[i];
    }

    result = total / len;

    return result;
}

int *createArray(unsigned int length, int value )
{
    int *array = (int *)malloc(length * sizeof(int));

    if (array == NULL)
    {
        return NULL;
    }

    for (unsigned int i  = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

void printArray(int *array, unsigned int length)
{
    for(unsigned int i = 0; i < length; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int *freeArray(int *array)
{
    if (array != NULL)
    {
        free(array);
    }

    return NULL;
}

int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value)
{
    int **matrix = (int **)malloc(num_rows * sizeof(int *));

    for (unsigned int i = 0; i < num_rows; i++)
    {
        matrix[i] = createArray(num_cols, value);
    }

    return matrix;
}

void printMatrix(int **matrix, unsigned int num_rows, unsigned int num_cols)
{
    if(matrix == NULL)
    {
        return;
    }

    for (unsigned int i = 0; i < num_rows; i++)
    {
        if(matrix[i] == NULL)
        {
            continue;
        }
        printArray(matrix[i], num_cols);
    }
    printf("\n");
}

int **freeMatrix(int **matrix, unsigned int num_rows)
{
    for(unsigned int i = 0; i < num_rows; i++)
    {
        matrix[i] = freeArray(matrix[i]);
    }

    free(matrix);
    return NULL;
}

int **transposeMatrix(int **p_matrix,
                      unsigned int num_rows,
                      unsigned int num_cols)
{
    int **p_matrix_transpose = createMatrix(num_cols, num_rows, 0);

    for (unsigned int i = 0; i < num_rows; i++)
    {
        for (unsigned int j = 0; j < num_cols; j++)
        {
            p_matrix_transpose[j][i] = p_matrix[i][j];
        }
    }

    return p_matrix_transpose;
}
