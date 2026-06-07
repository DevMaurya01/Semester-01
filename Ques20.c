/*write a program in c to check whether an entered character is a vowel or consoant usiing if - else statements*/
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter any alphabets:");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("vowel");
    }
    else
    {
        printf("\n Not Vowel");
    }
    return;
}