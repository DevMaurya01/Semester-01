/*write a program in c to display cube of number up to an interger*/
#include <stdio.h>
void main()
{
    int no, cube;
    printf("Enter a number:");
    scanf("%d", &no);
    cube = no * no * no;
    printf("\nCube=%d", cube);
    return;
}