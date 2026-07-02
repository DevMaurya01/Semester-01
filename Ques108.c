/*write a program to generate the pattern of number as given below*/
/*                  *
 *   *
 *   *   *
 *   *   *   *
 *   *   *   *   *    */
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
            printf("*");
        }
        return;
    }
}