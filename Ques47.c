/*write a program in c to display all odd values between 1 to 25 using for loop */
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 25; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
        }
    }
    return;
}