/*write a program  to display all odd values between 2 to 20 using do while loop*/
#include <stdio.h>
void main()
{
    int i = 2;
    do
    {
        if (i % 2 != 0)
            printf("\n%d", i);
        i++;
    } while (i <= 20);
    return;
}