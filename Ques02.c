/*Write a program to check whether the candidate's age is greater than 17 or not. If yes, display
message "Eligible for Voting"*/
#include <stdio.h>
void main()
{
    int age;
    printf("Enter your age=");
    scanf("%d", &age);
    if (age > 17)
    {
        printf("\n Yes! Eligible for Voting");
    }
    else
    {
        printf("\nNo! Eligible for Voting");
    }
    return;
}