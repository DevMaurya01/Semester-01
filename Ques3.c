/*Write the program in c to enter a number and check number is even or odd*/
#include <stdio.h>
void main()
{
    int number;
    printf("\nEnter a Number=");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("\nThis number is Even");
    }
    else
    {
        printf("\nThis number is Odd");
    }
    return;
}