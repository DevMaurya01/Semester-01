/*write a program in c to enter a number and display its tables & also calculate sum of all values using while loop*/
#include <stdio.h>
void main()
{
    int i = 1, no, sum = 0;
    printf("Enter a number:");
    scanf("%d", &no);
    while (i <= 10)
    {
        printf("\n%d", i * no);
        sum = sum + i * no;
        i++;
    }
    printf("\n Sum of tables %d are %d", no, sum);
    return;
}