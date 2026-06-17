/*write a program in c to display all even values between 1 to n and also calculate sum of all even number*/
#include <stdio.h>
void main()
{
    int i = 1, n, sum = 0;
    printf("Enter the value of n =");
    scanf("%d", &n);
home:
    if (i % 2 == 0)
    {
        printf("\n%d", i);
        sum = sum + i;
    }
    i++;
    if (i <= n)
    {
        goto home;
    }
    printf("\nSum of all even values are %d", sum);
    return;
}