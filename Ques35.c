/*write a program in c to display all odd number between 1 to 25 using goto*/
#include <stdio.h>
void main()
{
    int i = 1;
home:
{
    if (i % 2 != 0)
        printf("\n%d", i);
}
    i++;
    if (i <= 25)
    {
        goto home;
    }
    return;
}