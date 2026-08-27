/* Write a program to input two values from user and
check whether the first number is divisible by second
or not. (Hint Use % Sign) */

#include<stdio.h>
#include<conio.h>

void main ()
{
	int x , y ;

	clrscr();

	printf("\n Enter first value : ");
	scanf("%d", &x );

	printf("\n Enter second value : ");
	scanf("%d", &y );

	if ( y == 0 )
	{
		printf("\n %d not divisible by %d ", x , y );
	}
	else
	{
		if ( x % y == 0 )
		{
			printf ("\n %d is divisible by %d " , x , y );
		}
		else
		{
			printf("\n %d not divisible by %d ", x , y );
		}
	}

	getch();
}











