#include <stdio.h>
#include "Lib.h"


int main()
{

int first_number = getNumberFromUser();

int second_number = getNumberFromUser();

int Min = minimum_c(first_number, second_number);
int Max = maximum_c(first_number, second_number);
float Mean = mean_c(first_number, second_number);

printf("Min{%d, %d} = %d\n",first_number, second_number, Min);
printf("Max{%d, %d} = %d\n",first_number, second_number, Max);
printf("Mean[%d, %d] = %f\n", first_number, second_number, Mean);

    return 0;
}