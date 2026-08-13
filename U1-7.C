// Find largest out of three numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
	int x=0, y=0, z=0;

	clrscr();

	printf("\n Enter value of X : ");
	scanf("%d", &x );

	printf("\n Enter value of Y : ");
	scanf("%d", &y );

	printf("\n Enter value of Z : ");
	scanf("%d", &z );

	if( x > y )
	{
		if( x > z )
		{
			printf("\n %d is max", x);
		}
		else
		{
			printf("\n %d is max", z);
		}
	}
	else
	{
		if( y > z )
		{
			printf("\n %d is max", y);
		}
		else
		{
			printf("\n %d is max", z);
		}
	}
	getch();
}
