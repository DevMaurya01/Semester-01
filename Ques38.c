/*write a program in c to display 100 to 80 in reverse order using goto*/
#include <stdio.h>
void main()
{
    int i = 100;
home:
{
    printf("\n%d", i);
    i--;
}

    if (i >= 80)
    {
        goto home;
    }
    return;
}