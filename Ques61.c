/*write a program in c to display all even values between 1 to 25 using while loop*/
#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 25)
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
                }
        i++;
    }
    return;
}