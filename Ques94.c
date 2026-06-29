/*write a program in c to enter a number and display its cube*/
#include <stdio.h>
void main()
{
    int no, cube;
    printf("\nEnter your number:");
    scanf("%d", &no);
    cube = no * no * no;
    printf("Cube of %d is %d", no, cube);
    return;
}