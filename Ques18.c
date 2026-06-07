/*write a progrsm in c to enter a numeric value of the months and display name of months*/
#include <stdio.h>
void main()
{
    int no;
    printf("Enter your Number:");
    scanf("%d", &no);
    if (no == 1)
    {
        printf("January");
    }
    else if (no == 2)
    {
        printf("February");
    }
    else if (no == 3)
    {
        printf("March");
    }
    else if (no == 4)
    {
        printf("April");
    }
    else if (no == 5)
    {
        printf("May");
    }
    else if (no == 6)
    {
        printf("June");
    }
    else if (no == 7)
    {
        printf("July");
    }
    else if (no == 8)
    {
        printf("August");
    }
    else if (no == 9)
    {
        printf("September");
    }
    else if (no == 10)
    {
        printf("October");
    }
    else if (no == 11)
    {
        printf("November");
    }
    else if (no == 12)
    {
        printf("December");
    }
    else
    {
        printf("Invalid Number");
    }
    return;
}