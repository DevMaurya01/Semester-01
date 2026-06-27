/*write a program in c to display all odd values between 2 to 20 using while loop*/
#include <stdio.h>
void main()
{
    int i = 2;
    while (i <= 20)
    {
        if (i % 2 != 0)
        {
            printf("\n%d", i);
        }
        i++;
    }
    return;
}