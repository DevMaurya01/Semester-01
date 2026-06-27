/*write a program to display numbers from 1 to 16. Use incrementation operation in the body of the loop for more then one time*/
#include <stdio.h>
void main()
{
    int i, c = 0;
    for (i = 0; i <= 16;)
    {
        i++;
        printf("%d ", i);
        i = i + 1;
        printf("%5d", i);
        c++;
    }
    printf("\n The body of the loop is executed for %d times", c);
    return;
}