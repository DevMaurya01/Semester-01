/*write a program in c o find multiply of two number*/
#include <stdio.h>
void main()
{
    int no1, no2, multiply;
    printf("Enter the value of no1 & no2:");
    scanf("%d%d", &no1, &no2);
    multiply = no1 * no2;
    printf("Multiply of two number=%d", multiply);
    return;
}