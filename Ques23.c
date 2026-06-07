/*write a program in c to display the names of months that have the entered number of days using if-else statements*/
#include <stdio.h>
void main()
{
    int day;
    printf("Enter number of day in a Months: ");
    scanf("%d", &day);
    if (day == 30)
    {
        printf("Months with 30 Days are:");
        printf("\nApril\nJune\nSeptember\nNovember");
    }
    else if (day == 31)
    {
        printf("Months with 31 Days are :");
        printf("\nJanuary\nMarch\nMay\nJuly\nAugust\nOctober\nDecember");
    }
    else if (day == 28 || day == 29)
    {
        printf("February has 28 days or 29 days");
    }
    return;
}