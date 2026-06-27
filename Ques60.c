/*write a program to display 1 to 10 and also calculate/display sum of all value using loop*/
#include <stdio.h>
void main()
{
    int i = 1, sum = 0;
    while (i <= 10)
    {
        {
            printf("\n%d", i);
            sum = sum + i;
        }
        i++;
    }
    printf("\nSum of all Nuber are %d", sum);
    return;
}