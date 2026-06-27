/*write a program to display letter from a to j using infinite for loop. Use goto statements to exit from the loop*/
#include <stdio.h>
void main()
{
    int i = 97;
    for (;;)
    {
        printf(" %d", i++);
        if (i == 107)
        {
            goto stop;
        }
    }
stop:
    return;
}