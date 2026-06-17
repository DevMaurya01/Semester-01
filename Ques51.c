/*write a program in c to display 100 to 80 in reverse order using for loop*/
#include <stdio.h>
void main()
{
    int i = 100;
    for (i = 100; i >= 80; i--)
    {
        printf("\n%d", i);
    }
    return;
}