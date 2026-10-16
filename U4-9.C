/* Print first 10 natural number with its square and
cube. */

#include<stdio.h>
#include<conio.h>

void main ()
{
	int i, j, n  ;

	clrscr();

	printf("\n Enter Value of N : ");
	scanf("%d", &n);

	printf("\n Using For Loop \n\n");
	for(i=1; i<=n; i++)
	{
		printf("  %d", i);

	}
	printf("\n");
	for(i=1; i<=n; i++)
	{
		printf("  %d", i*i);

	}
	printf("\n");
	for(i=1; i<=n; i++)
	{
		printf("  %d", i*i*i);

	}




	printf("\n\n\n Using While Loop \n\n");
	j=1;
	while( j<=n )
	{
		printf("   %d", j);
		j++;

	}
	printf("\n");
	while( j<=n )
	{
		printf("   %d", j*j);
		j++;

	}
	printf("\n");
	while( j<=n )
	{
		printf("   %d", j*j*j);
		j++;

	}


	getch();

}