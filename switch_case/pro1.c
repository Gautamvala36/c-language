// write a program to findout whether the given alphabet is vowel or not
// switch case

#include <stdio.h>

void main()
{
    char letter;

    printf("Enter the letter : ");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("It Is Vowel");
        break;

    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("It Is Vowel");
        break;

    default:
        printf("It Is Constant");
        break;
    }
    printf("\nGood By...");
}