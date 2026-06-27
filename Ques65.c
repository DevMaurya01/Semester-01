/*write a program in c to display 100 to 80 in reverse order using while loop*/
#include <stdio.h>
void main()
{
    int i = 100;
    while (i >= 80)
    {
        printf("\n%d", i);
        i--;
    }
    return;
}