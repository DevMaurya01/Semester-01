/*write a program in c to print your name 10 times using do while loop*/
#include <stdio.h>
void main()
{
    int i = 1;
    do
    {
        printf("\n%d Dev Maurya", i);
        i++;
    } while (i <= 10);
    return;
}