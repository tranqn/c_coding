#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);

    for (int i = 0; i <= length; i++)
    {
    printf("<\t");
        for( int j = 0; j < length; j++)
        {
            if(i == 0)
            {
            printf("  ^\t");
            }
            else if(i == length)
            {
            printf("  v\t");
            }
            else
            {
            printf("(%d/%d)\t",i,j+1);
            }
        }
    printf(">\n");
    }

    return 0;

}
