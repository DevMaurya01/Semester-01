/*write a program in c to enter number & display it's table and also display sum of all values using do while loop*/
#include <stdio.h>
void main()
{
    int i = 1, no, sum = 0;
    printf("\nEnter your number:");
    scanf("%d", &no);
    do
    {
        printf("\n%d", i * no);
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("\nSum of all numbers are %d", sum);
    return;
}