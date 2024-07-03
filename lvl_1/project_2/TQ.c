#include <stdio.h>
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
    float result = (a + b) / 2.0f;

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