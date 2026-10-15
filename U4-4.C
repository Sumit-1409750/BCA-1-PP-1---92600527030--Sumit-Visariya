//Write a program that Print 100 99 98...... 90

#include<stdio.h>
#include<conio.h>
void main ()
{
	int i, j;


	clrscr();

	printf(" Using For Loop\n\n");
	for(i=100; i>=90; i= i - 1 )
	{

		printf("   %d", i);

	}

	printf("\n\n Using While Loop \n\n\n");
	j=100;
	while ( j>=90)
	{
		printf("   %d",j);
		j--;

	}


	getch();

}
