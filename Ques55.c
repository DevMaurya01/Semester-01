/*write a program in c to enter a number and calculate its factorial number using for loop*/
#include <stdio.h>
void main()
{
    int i, no, f = 1;
    printf("Enter the value of no :");
    scanf("%d", &no);
    for (i = 1; i <= no; i++)
    {
        f = f * i;
        printf("\nFact=%d", f);
    }
    return;
}