/*write a program in c to enter a number and check number it prime or not*/
#include <stdio.h>
void main()
{
    int i = 1, no, count;
    printf("Enter the value of no=");
    scanf("%d", &no);
    while (i <= no)
    {
        if (no % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 0)
    {
        printf("%d is Prime Number", no);
    }
    else
    {
        printf("\n%d is Not prime number", no);
    }
    return;
}