/*print the five number starting from 1 together with their squares*/
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("\n Number: %3d its Square: %d", i, i * i);
    }
    return;
}