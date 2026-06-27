/*Display number from 1 to 15 using for loop, Use i=i+1*/
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 15; i = i + 1)
    {
        printf("%3d", i);
    }
    return;
}