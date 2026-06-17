/*write a program in c to enter a number and check number is prime*/
#include <stdio.h>
void main()
{
    int i, no, count = 0;
    printf("Enter the value of no=");
    scanf("%d", &no);
    for (i = 1; i <= no; i++)
    {
        if (no % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("\nNumber is Prime");
    }
    else
    {
        printf("\nNumber is not Prime");
    }
    return;
}