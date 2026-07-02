/*write a program to generate the pattern of number as given bellow*/
/*  5   4   3   2   1
    5   4   3   2   1
    5   4   3   2   1
    5   4   3   2   1
    5   4   3   2   1*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return;
}