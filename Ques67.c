/*write a program in c to enter a number & display its tables in reverse order using while loop*/
#include <stdio.h>
void main()
{
    int i = 10, no;
    printf("\nEnter the value of no:");
    scanf("%d", &no);
    while (i >= 1)
    {
        printf("\n%d", i * no);
        i--;
    }
    return;
}