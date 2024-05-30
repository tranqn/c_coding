#include <stdio.h>
#include "Lib.h"

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
    float result = (a + b) / 2.0f;

    return result;
}
