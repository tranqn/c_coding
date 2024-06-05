#include <stdio.h>

void binom(int a, int b, int *c)
{
    int square = a + b;
    *c = square * square;
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf("a please ... ");
    scanf("%d", &a);
    printf("b please ... ");
    scanf("%d", &b);

    binom(a, b, &c);

    printf("a is = %d \t b is = %d\n",a,b);
    printf("binom (a + b)^2 is = %d\n",c);

    return 0;
}