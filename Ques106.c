/*write a program to generate the pattern of number as given below*/
/*                  1
                1   2
            1   2   3
        1   2   3   4
    1   2   3   4   5*/
#include <stdio.h>
void main()
{
    int i, j, k, s = 4;
    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= s; k++)
        {
            printf(" ");
        }
        s--;
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return;
}