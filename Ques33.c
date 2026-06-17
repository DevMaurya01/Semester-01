/*write a program in c to display 10 to 1 also display sum of all values goto*/
#include <stdio.h>
void main()
{
    int i = 10, sum = 0;
home:
{
    printf("\n%d", i);
    sum = sum + i;
}
    i--;
    if (i >= 0)
    {
        goto home;
    }
    printf("\nSum of all number=%d", sum);
    return;
}