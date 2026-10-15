\\Write a program that Print 1 3 5 7 ...... N

#include<stdio.h>
#include<conio.h>

void main ()
{
	int i,n,j;


	clrscr();

	printf("Enter Value of N : ");
	scanf("%d", &n);

	printf("\n\n Using For Loop \n\n\n");
	for(i=1; i<=n; i= i + 2 )
	{

		printf("   %d", i);

	}

	printf("\n\n\n Using While Loop \n\n");
	j=1;
	while( j<=n)
	{
		printf("  %d", j);
		j = j + 2;

	}

	getch();

}