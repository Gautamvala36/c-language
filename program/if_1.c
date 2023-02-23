// write a program to findout whether given letter(single character) is vowel or not
//  a,e,i,o,u

#include <stdio.h>

void main()
{
    char letter;

    printf("Enter the letter : ");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'A')
    {
        printf("It is vowel");
    }
    else if (letter == 'e' || letter == 'E')
    {
        printf("It is vowel");
    }
    else if (letter == 'i' || letter == 'I')
    {
        printf("It is vowel");
    }
    else if (letter == 'o' || letter == 'O')
    {
        printf("It is vowel");
    }
    else if (letter == 'u' || letter == 'U')
    {
        printf("It is vowel");
    }
    else
    {
        printf("it is not vowel");
    }
}