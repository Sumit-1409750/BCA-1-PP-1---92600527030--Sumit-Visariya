/* Write a program that input one character from
user and find out that character is vowel or not.(aeiou
is called vowel). */

#include <stdio.h>
#include<conio.h>

int main()
{
    char ch;
    clrscr();

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The character is a vowel.");
    }
    else
    {
        printf("The character is not a vowel.");
    }

    return 0;
}