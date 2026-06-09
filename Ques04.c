/*Write the program in c to enter a number and check number is odd or even*/
#include <stdio.h>
void main()
{
    int number;
    printf("Enter a number=");
    scanf("%d", &number);
    if (number % 2 != 0)
    {
        printf("\nThis number is Odd");
    }
    else
    {
        printf("\nThis number is even");
    }
    return;
}