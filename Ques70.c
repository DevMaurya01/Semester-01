/*write a program in c to enter two number & calculate its HCF*/
#include <stdio.h>
void main()
{
    int l, no1, no2;
    printf("Enter two Number:");
    scanf("%d%d", &no1, &no2);
    if (no1 < no2)
    {
        l = no1;
    }
    else
    {
        l = no2;
    }
    while (l)
    {
        printf("HCF=%d", l);
        break;
    }
    l--;
    return;
}