/*write the program in c to find the Largest number out of three numbeers. Read the number through the keyboard*/
#include <stdio.h>
void main()
{
    int no1, no2, no3;
    printf("Enter three number:");
    scanf("\n%d%d%d", &no1, &no2, &no3);
    if (no1 > no2)
    {
        if (no1 > no3)
        {
            printf("\n%d is Largest Number", no1);
        }
        else
        {
            printf("%d is Largest Number", no3);
        }
    }
    else
    {
        if (no2 > no3)
        {
            printf("%d is Largest Number", no2);
        }
        else
        {
            printf("%d is Largest Number", no3);
        }
    }
    return;
}