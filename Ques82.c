/*write a program in c to print 1 to 10 using do while loop*/
#include <stdio.h>
void main()
{
    int i = 1;
    do
    {
        printf("\n%d", i);
        i++;
    } while (i <= 10);
    return;
}