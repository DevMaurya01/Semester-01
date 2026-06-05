/*write a program in c to enter basic salary and calculate net salary*/
#include <stdio.h>
void main()
{
    float bs, da, hra, ta, net;
    printf("\nEnter your basic salary:");
    scanf("%f", &bs);
    printf("Enter your Dearness Allowance:");
    scanf("%f", &da);
    printf("Enter House rent Allowance:");
    scanf("%f", &hra);
    printf("Enter your travel allowance:");
    scanf("%f", &ta);
    net = bs + da + hra + ta;
    printf("\n Net Salary:%f", net);
    return;
}