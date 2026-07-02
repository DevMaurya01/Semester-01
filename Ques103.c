/*write a program to generate the pattern of number as given bellow*/
/*  *   *   *   *   *
 *   *   *   *   *
 *   *   *   *   *
 *   *   *   *   *
 *   *   *   *   *   */
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return;
}