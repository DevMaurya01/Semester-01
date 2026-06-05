/*write a program in c to enter two number and check smallest one*/
#include <stdio.h>
void main()
{
    int no1, no2;
    printf("Enter two Value:");
    scanf("%d%d", &no1, &no2);
    if (no1 < no2)
    {
        printf("%d is Smallest Number", no1);
    }
    else
    {
        printf("%d is Smallest Number", no2);
    }
    return;
}