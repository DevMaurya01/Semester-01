/*write a program in c to check whether an enter character is a vowel and consonant using gate*/
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A')
    {
        printf("It is vowel");
    }
    else if (ch == 'e' || ch == 'E')
    {
        printf("It is vowel");
    }
    else if (ch == 'i' || ch == 'I')
    {
        printf("It is vowel");
    }
    else if (ch == 'o' || ch == 'O')
    {
        printf("It is vowel");
    }
    else if (ch == 'u' || ch == 'U')
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is Consonant");
    }
    return;
}