/*Write the program in c to display the names of the months that have entered number of days using switch case*/
#include <stdio.h>
void main()
{
    int month;
    printf("Enter number of days in a month:");
    scanf("%d", &month);
    switch (month)
    {
    case 30:
    {
        printf("Months with 30 Days are:\n");
        printf("April\nJune\nSeptember\nNovember");
        break;
    }
    case 31:
    {
        printf("Months with 31 Days are:");
        printf("January\nMarch\nMay\nJulu\nAugust\nOctober\nDecember");
        break;
    }
    case 28:
        printf("February has 28 days or 29 days");
        break;
    case 29:
        printf("Februaru has 29 days or 28 days");
        break;
    default:
        printf("Invalis Number !Please enter correct number");
    }
    return;
}