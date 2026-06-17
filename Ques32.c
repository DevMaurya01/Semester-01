/*write a program in c to display 1 to 10 and also display sum of all values using goto*/
#include <stdio.h>
void main()
{
    int i = 1, sum = 0;
home:
{
    printf("\n%d", i);
    sum = sum + i;
}
    i++;
    if (i <= 10)
    {
        goto home;
    }
    printf("\nSum of all number=%d", sum);
    return;
}