/*write a program in c to print 10 to 1 using do while loop*/
#include <stdio.h>
void main()
{
    int i = 10;
    do
    {
        printf("\n%d", i);
        i--;
    } while (i >= 1);
    return;
}