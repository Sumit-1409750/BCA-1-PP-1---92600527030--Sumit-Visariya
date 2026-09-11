/* Write programs that find out character is in
uppercase or lowercase. */

#include<stdio.h>
#include<conio.h>

void main()

{
    char ch;

    clrscr();

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
	printf("\n Character is Uppercase");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
	printf("\n Character is Lowercase");

    }

    getch();

}