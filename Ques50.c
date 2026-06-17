/*write a program in c to display all odd values between 1 to n and also calculate sum of all odd values*/
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("Enter the values of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("\n%d", i);
            sum = sum + i;
        }
    }
    printf("\nSum of all Odd Number are %d", sum);
    return;
}