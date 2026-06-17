/*write a program in c to enter two number and calculate its LCM*/
#include <stdio.h>
void main()
{
    int i, no1, no2;
    printf("Enter the values of no1 & no2:");
    scanf("%d%d", &no1, &no2);
    for (i = 1; i <= no1 * no2; i++)
    {
        if (i % no1 == 0 && i % no2 == 0)
        {
            printf("\nLCM=%d", i);
            break;
        }
    }
    return;
}