/*write a program to find the smallest out of the three number*/
#include <stdio.h>
void main()
{
    int no1, no2, no3;
    printf("Enter three number:");
    scanf("%d%d%d", &no1, &no2, &no3);
    if (no1 < no2)
    {
        if (no1 < no3)
        {
            printf("%d is Smallest Number", no1);
        }
        else
        {
            printf("%d is Samllest NUmber", no3);
        }
    }
    else
    {
        if (no2 < no3)
        {
            printf("%d is Smallest Number", no2);
        }
        else
        {
            printf("%d is Smallest Number", no3);
        }
    }
    return;
}