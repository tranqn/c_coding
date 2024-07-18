#include <stdio.h>

#define PI 3.14159f

int main()
{
        //1.)read the values for r from the user, check the input is correct(non-negavtive length)
        //2.)compute the perimeter and area of the circle
        //3.)print the computed values to the console

        
        float r = 0.0F;
        
        printf("Please enter the length of r:");
        scanf("%f", &r);
        
        if(r < 0.0F)
        {
            printf("r is negative :(");
            return 1;
        }
        else
        {
            float area = PI*r*r;
            float perimeter = 2 * PI * r;

            printf("the area is: %f\n", area);
            printf("the perimeter is: %f\n", perimeter);
            return 0;

        }
}