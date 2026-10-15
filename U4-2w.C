// Write a program that Print 2 4 6 ....... 20

#include<stdio.h>
#include<conio.h>

void main ()
{
	int i, j ;


	clrscr();

	printf("\n Using For Loop \n\n ");
	for(i=2; i<=20; i= i + 2 )
	{

		printf("   %d", i);

	}

	printf("\n\n\n Using While Loop \n\n");
	j=2;
	while( j<=20 )
	{
		printf("  %d", j);
		j= j + 2 ;

	}

	getch();

}