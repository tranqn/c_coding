#ifndef TQ_H
#define TQ_H

int getNumberFromUser();

int minimum_c(int a, int b);

int maximum_c(int a, int b);

float mean_c(int a, int b);

int minArray(int *a, int len);

int maxArray(int *a, int len);

float meanArray(int *a, int len);

int *createArray(unsigned int length, int value );

void printArray(int *array, unsigned int length);

int *freeArray(int *array);

int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value);

void printMatrix(int **matrix, unsigned int num_rows, unsigned int num_cols);

int **freeMatrix(int **matrix, unsigned int num_rows);

int **transposeMatrix(int **matrix, unsigned int num_rows, unsigned int num_cols);
#endif
