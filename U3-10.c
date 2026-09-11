/* Write a program to Input a character, if it is
capital convert into small else convert into capital */

#include<stdio.h>
#include<conio.h>

void main()

{
	   char ch;

    clrscr();
    
    printf(" Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
	   printf("\n Uppercase letter" );
    }
    else
    {
	if(ch >= 'a' && ch <= 'z' )
	{
	    printf("\n Lowercase letter" );
	}
	else //( ch >= 48 && ch <= 57 )
	{
	    printf("\n Input is not valid charater ");
	}

    }

	
}
