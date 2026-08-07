//Write a program that input 2 number from user andfind out number is equal or not.


#include<stdio.h>
#include<conio.h>

void main()
{

	int a,b;
	clrscr();

	printf("\n Enter value of A : ");
	scanf("%d", &a );

	printf("\n Enter value of B : ");
	scanf("%d", &b );

	if(a == b)
	{
		printf("\n Both are Equal ");
	}
	else
	{
		printf("\n Both are not Equal ");

	}

	getch();
}

