/*write a program in c to display all odd values between 1 to n & also calculate sum of all odd values using while loop*/
#include <stdio.h>
void mian()
{
    int i = 1, n, sum = 0;
    printf("Enter the values of n:");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            printf("\n%d", i);
            sum = sum + i;
        }
        i++;
    }
    printf("\nSum of all odd number are %d", sum);
    return;
}