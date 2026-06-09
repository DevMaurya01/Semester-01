/*write a program in c to display to print "Hello" ten times using goto*/
#include <stdio.h>
void main()
{
    int i = 1;
home:
    printf("%d Hello\n", i);
    i++;
    if (i <= 10)
    {
        goto home;
    }
    return;
}