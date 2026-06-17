/*write a program in c to display all Odd values between 1 to n & also calculate sum of all odd values*/
#include <stdio.h>
void main()
{
    int i = 1, n, sum = 0;
    printf("\nEnter the values of n=");
    scanf("%d", &n);
home:
    if (i % 2 != 0)
    {
        printf("\n%d", i);
        sum = sum + i;
    }
    i++;
    if (i <= n)
    {
        goto home;
    }
    printf("\nSum of all odd number are %d", sum);
    return;
}