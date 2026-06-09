/*write a program in c to print your name 10 times using goto*/
#include <stdio.h>
void main()
{
    int i = 1;
home:
    printf("\n%d MAurya Campus Hub", i);
    i++;
    if (i <= 10)
    {
        goto home;
    }
    return;
}