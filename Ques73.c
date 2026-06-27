/*write a program in c to enter a number and display its Square*/
#include <stdio.h>
void main()
{
    int no, square = 0;
    printf("Enter a number:");
    scanf("%d", &no);
    square = no * no;
    printf("Square=%d", square);
    return;
}