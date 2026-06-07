/*write a program in c to enter aa numeric value of day in week and display name of Day using switch case*/
#include <stdio.h>
void main()
{
    int day;
    printf("Enter the number value of Day:");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid Number of Day");
    }
    return;
}