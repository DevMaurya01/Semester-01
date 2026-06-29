/*write a program in c to enter a number and display it table in reverse order using do while loop*/
#include <stdio.h>
void main()
{
    int i = 10, no;
    printf("\nEnter your number:");
    scanf("%d", &no);
    do
    {
        printf("\n%d", i * no);
        i--;
    } while (i >= 1);
    return;
}