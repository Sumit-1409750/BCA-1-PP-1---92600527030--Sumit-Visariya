/* Write a program to display following pyramid
using loop. (Upto N terms) */

#include<stdio.h>
#include<conio.h>

void main ()
{
	int i,j,n;
	clrscr();

	printf("\n Enter Value of N : ");
	scanf("%d", &n);
	printf("\n");

	for ( i=1; i<=n; i++ )
	{
		for ( j=1; j<=i; j++ )
		{
			printf("  %d  ", i);
		}
		printf("\n");
	}

	getch();

}