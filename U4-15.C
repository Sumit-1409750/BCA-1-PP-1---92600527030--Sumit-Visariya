/* Write a program that input number and find out
number is Armstrong or not. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,sum=0,y, tmp;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d", &x );
	tmp = x;

	while ( x > 0 )
	{
		y = x % 10;
		sum = sum + ( y*y*y);
		x = x / 10;
	}



	if ( sum == tmp )
	{
		printf("\n Number is Armstrong Number  ");
	}
	else
	{
		printf("\n Number is not Armstrong Number ");
	}

	getch();

}