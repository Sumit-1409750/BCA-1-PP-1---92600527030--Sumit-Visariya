//Write a program that Print 1 2 3 4 ...... 10

#include<stdio.h>
#include<conio.h>

void main ()
{
	int i;

	clrscr();

	for(i=1; i<=10; i++)
	{
		printf("   %d", i);

	}
		printf("\n");

	for(i=1; i<=10; i++)
	{
		printf("   %d", i*i);

	}
		printf("\n");

	for(i=1; i<=10; i++)
	{
		printf("   %d", i*i*i);
	}

	getch();

}