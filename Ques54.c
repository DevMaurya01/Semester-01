/*write a program in c to display enter a number and disolay its table using for loop*/
#include <stdio.h>
void main()
{
    int i, no;
    printf("Enter the value of no:");
    scanf("%d", &no);
    for (i = 10; i >= 1; i--)
    {
        printf("\n%d", i * no);
    }
    return;
}