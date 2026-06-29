/*write a program in c to display 100 to 80 in reverse order using do while loop*/
#include <stdio.h>
void main()
{
    int i = 100;
    do
    {
        printf("%3d", i);
        i--;
    } while (i >= 80);
    return;
}