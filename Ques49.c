/*write a program in c to display all even values between 1 to n and also calculate sum of
all even values*/
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("Enter the value of n=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
            sum = sum + i;
        }
    }
    printf("\nSum of all even number are %d", sum);
    return;
}