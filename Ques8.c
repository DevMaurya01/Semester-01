/*write the program in c to find division of two number*/
#include <stdio.h>
void main()
{
    int no1, no2, divide;
    printf("\nEnter the value of no1 & no2:");
    scanf("%d%d", &no1, &no2);
    divide = no1 / no2;
    printf("\nDivision of two number=%d", divide);
    return;
}