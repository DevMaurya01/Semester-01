/*write a program in c to print Hello infinite times using goto*/
#include <stdio.h>
void main()
{
hi:
    printf("Hello");
    goto hi;
    return;
}