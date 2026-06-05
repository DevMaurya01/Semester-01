/*write a program in c to find enter a number values of day in week and display name of Day*/
#include <stdio.h>
void main()
{
    int no;
    printf("Enter your number:");
    scanf("%d", &no);
    if (no == 1)
    {
        printf("Monday");
    }
    else if (no == 2)
    {
        printf("Tuesday");
    }
    else if (no == 3)
    {
        printf("Wednesday");
    }
    else if (no == 4)
    {
        printf("Thursday");
    }
    else if (no == 5)
    {
        printf("Friday");
    }
    else if (no == 6)
    {
        printf("Saturday");
    }
    else if (no == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Number");
    }
}