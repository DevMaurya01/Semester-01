/*write a program in c to calculate the electric bill*/
#include <stdio.h>
void main()
{
    int pmr, cmr, cpu, tu, eb;
    printf("Enter previous month reading:");
    scanf("%d", &pmr);
    printf("Enter current month reading:");
    scanf("%d", &cmr);
    printf("Enter per unit charge:");
    scanf("%d", &cpu);
    tu = cmr - pmr;
    eb = tu * cpu;
    printf("total Unit =%d", tu);
    printf("\nElictric Bill=%d", eb);
    return;
}