/*write a program in c to enter two number and check greatest one*/
#include <stdio.h>
void main()
{
    int no1, no2;
    printf("Enter the value of no1 & no2:");
    scanf("%d%d", &no1, &no2);
    if (no1 > no2)
    {
        printf("%d is Greatest Number", no1);
    }
    else
    {
        printf("%d is Greatest Number", no2);
    }
    return;
}