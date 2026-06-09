/*write a program in c to display 10 to 1 using goto*/
#include <stdio.h>
void main()
{
    int i = 10;
home:
    printf("\n%d", i);
    i--;
    if (i >= 1)
    {
        goto home;
    }
    return;
}