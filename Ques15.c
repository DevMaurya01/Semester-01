/*write a program to find the largest out of the four number*/
#include <stdio.h>
void main()
{
    int no1, no2, no3, no4;
    printf("Enter four number:");
    scanf("%d%d%d%d", &no1, &no2, &no3, &no4);
    if (no1 > no2)
    {
        if (no1 > no3)
        {
            if (no1 > no4)
            {
                printf("%d is Largest Number", no1);
            }
            else
            {
                printf("%d is Largest Number", no4);
            }
        }
        else
        {
            if (no3 > no4)
            {
                printf("%d is Largest Number", no3);
            }
            else
            {
                printf("%d is Largest Number", no4);
            }
        }
    }
    else
    {
        if (no2 > no3)
        {
            if (no2 > no4)
            {
                printf("%d is Largest Number", no2);
            }
            else
            {
                printf("%d is Largest Number", no4);
            }
        }
        else
        {
            if (no3 > no4)
            {
                printf("%d is Largest Number", no3);
            }
            else
            {
                printf("%d is Largest Number", no4);
            }
        }
    }
}