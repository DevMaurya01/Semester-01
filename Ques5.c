/*Write a program in c to find sum of two number*/
#include <stdio.h>
void main()
{
    int no1, no2, sum;
    printf("Enter the value of No1=");
    scanf("%d", &no1);
    printf("Enter the value of no2=");
    scanf("%d", &no2);
    sum = no1 + no2;
    printf("\nSum of two number=%d", sum);
    return;
}