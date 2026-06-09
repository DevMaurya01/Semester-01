/*write a program in c to printf 1 to 10 using goto*/
#include <stdio.h>
void main()
{
    int i = 1;
home:
    printf("\n%d", i);
    i++;
    if (i <= 10)
    {
        goto home;
    }
    return;
}