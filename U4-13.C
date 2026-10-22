/* Write a program that input number and find out
reverse of that number. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,r=0,y;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d", &x );

	while ( x > 0 )
	{
		y = x % 10;
		r = r * 10 + y;
		x = x / 10;
	}

	printf("\n Reverse is : %d", r );

	getch();

}