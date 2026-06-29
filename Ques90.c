/*write a program in c to enter a number & display its table using do while loop*/
#include <stdio.h>
void main()
{
    int i = 1, no;
    printf("\nEnter the  Number:");
    scanf("%d", &no);
    do
    {
        printf("%3d", i * no);
        i++;
    } while (i <= 10);
    return;
}