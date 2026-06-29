/*write a program in c to print 1 to 10 & also calculate sum of all values using do while loop*/
#include <stdio.h>
void main()
{
    int i = 1, sum = 0;
    do
    {
        printf("\n%d", i);
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("\nSum of all number are %d", sum);
    return;
}