#include <stdio.h>
#include <stdbool.h>

int main()
{

    printf("Please enter a valid unsigned integer!");
    unsigned int input_number_1;
    scanf("%u", &input_number_1);

    unsigned int remainder = input_number_1%3;                          //calculated one time to use it muliple times
    bool comparison = input_number_1 % 3 == 0 ? true : false;           //ternary operator

    if (comparison == true)
    {
        printf("The number you entered can be div. by 3!\n");
        return 0;
    }
    else
    {
        printf("The number you entered is not div. by 3!\n");
        printf("The remainder of the operation is: %d\n", remainder);
        return 0;
    }
}
