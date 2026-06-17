/*write a program in c to 1 to 10 and display sum of all values using for loop*/
#include <stdio.h>
void main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d", i);
        sum = sum + i;
    }
    printf("\nSum of all vlues are %d", sum);
    return;
}