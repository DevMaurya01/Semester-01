/*write a program in c to enter a number and display its table using for loop*/
#include <stdio.h>
void main()
{
    int i, no;
    printf("Enter the values of no:");
    scanf("%d", &no);
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d", i * no);
    }
    return;
}