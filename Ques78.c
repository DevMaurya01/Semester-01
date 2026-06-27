/*write a program to display even number from 1 to 14. Declare the initial counter values before the for loop statements*/
#include <stdio.h>
void main()
{
    int i = 0;
    for (; i <= 15;)
    {
        printf("%3d", i);
        i += 2;
    }
    return;
}