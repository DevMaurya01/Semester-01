/*write a program in c to check whether an entered character is a vowel and consonant using switch case*/
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    {
        printf("Vowel: %c", ch);
        break;
    }
    default:
    {
        printf("Consonant");
    }
    }
    return;
}