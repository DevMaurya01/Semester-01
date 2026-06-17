/*wriet a program in c to enter a number and calculate it's fatorial using goto*/
#include <stdio.h>
void main()
{
    int i = 1, no, f = 1;
    printf("Enter the value of no:");
    scanf("%d", &no);
abc:
    f = f * i;
    i++;
    if (i <= no)
    {
        goto abc;
    }
    printf("\nFactorial=%d", i);
    return;
}