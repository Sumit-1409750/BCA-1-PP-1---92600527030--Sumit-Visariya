// Short if condition

#include<stdio.h>
#include<conio.h>

void main ()
{
	int x, y, max;

	clrscr();

	printf(" Enter Value X and Y : ");
	scanf("%d%d", &x, &y );

	max = ( x > y ) ? x : y;
	printf("\n Max value is : %d", max);

	getch();


}