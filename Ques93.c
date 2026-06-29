/*write a program in c to enter two number and calculate is LCM*/
#include <stdio.h>
void main()
{
    int i = 1, no1, no2;
    printf("\nEnter your two numbers:");
    scanf("%d%d", &no1, &no2);
    do
    {
        if (i % no1 == 0 && i % no2 == 0)
        {
            printf("LCM=%d", i);
            break;
                }
        i++;
    } while (i <= no1 * no2);
    return;
}