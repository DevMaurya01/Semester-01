/*write a program to display the number in ascending (1 to 10) and descending (10 to 1) orders*/
#include <stdio.h>
void main()
{
    int i = 0;
    printf("Number in Ascending order:");
    for (; ++i <= 10;)
    {
        printf("\t%d", i);
    }
    printf("\nNumber in Descending order:");
    for (; i-- > 1;)
    {
        printf("\t%d", i);
    }
    return;
}