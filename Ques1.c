/*Write the program in c to enter a age to check eligible for Voting.*/
#include <stdio.h>
void main()
{
    int age;
    printf("\nEnter your age=");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\n Yes! Eligible for Voting");
    }
    else
    {
        printf("\n No! Eligible for Voting");
    }
    printf("\n Thanks");
    return;
}