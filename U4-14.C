/* Write a program that input number and find out
number is palindrome or not. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,r=0,y, tmp;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d", &x );
	tmp = x;

	while ( x > 0 )
	{
		y = x % 10;
		r = r * 10 + y;
		x = x / 10;
	}

	printf("\n Reverse is : %d", r );

	if ( r == tmp )
	{
		printf("\n Number is Palindrome ");
	}
	else
	{
		printf("\n Number is not Palindrome ");
	}

	getch();

}