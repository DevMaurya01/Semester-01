/*write a program in c two number and calculate its LCM*/
#include <stdio.h>
void main()
{
    int i = 1, no1, no2;
    printf("Enter two number:");
    scanf("%d%d", &no1, &no2);
    while (i <= no1 * no2)
    {
        if (i % no1 == 0 && i % no2 == 0)
        {
            printf("\nLCM of %d and %d is %d", no1, no2, i);
            break;
        }
        i++;
    }
    return;
}