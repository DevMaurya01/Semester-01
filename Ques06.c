/*write a program in c to find substraction of two number*/
#include <stdio.h>
void main()
{
    int no1, no2, sub;
    printf("Enter the values of no1 & no2:");
    scanf("%d%d", &no1, &no2);
    sub = no1 - no2;
    printf("\nSubstraction of two number=%d", sub);
    return;
}