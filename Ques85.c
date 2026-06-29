/*write a program in c to display all even values between 1 to 25 using do while loop*/
#include <stdio.h>
void main()
{
    int i = 1;
    do
    {
        if (i % 2 == 0)
            printf("\n%d", i);
        i++;
    } while (i <= 25);
    return;
}