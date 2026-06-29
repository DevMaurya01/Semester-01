/*write a program in c to display all even values between 1 to n and also calculate sum of all odd values*/
#include <stdio.h>
void main()
{
    int i = 1, no, sum = 0;
    printf("\nEnter the values of no:");
    scanf("%d", &no);
    do
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
            sum = sum + i;
        }

        i++;
    } while (i <= no);
    printf("\nSum of even numbers are %d", sum);
    return;
}