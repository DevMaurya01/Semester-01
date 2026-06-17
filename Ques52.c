/*write a program in c to enter a  number it's table and also display sum of all values using for loop*/
#include <stdio.h>
void main()
{
    int i, no, sum = 0;
    printf("Enter the values of no:");
    scanf("%d", &no);
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d", i * no);
        sum = sum + i;
    }
    printf("\nSum of its table %d", sum);
    return;
}