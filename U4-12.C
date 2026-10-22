/* Write a program that input number and find out
sum of digits. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,s=0,y;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d", &x );

	while ( x > 0 )
	{
		y = x % 10;
		s = s + y;
		x = x / 10;
	}

	printf("\n Sum is : %d", s );

	getch();

}