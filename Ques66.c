/*write a program in c to enter a number and display its table using while loop*/
#include <stdio.h>
void main()
{
    int i = 1, no;
    printf("\nEnter the values of no:");
    scanf("%d", &no);
    while (i <= 10)
    {
        printf("\n%d", i * no);
        i++;
    }
    return;
}