//Write a program that Print 200 198 196 .... 180

#include<stdio.h>
#include<conio.h>
void main ()
{
	int i, j ;


	clrscr();

	printf("\n Using For Loop: \n\n");
	for(i=200; i>=180; i= i - 2 )
	{

		printf("   %d", i);

	}

	printf("\n\n\n Using While Loop: \n\n");

	j=200;
	while ( j>=180)
	{
		printf("    %d",j);
		j= j-2;

	}

	getch();

}
