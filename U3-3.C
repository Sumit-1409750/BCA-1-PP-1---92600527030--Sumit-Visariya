//Write a program that input age from user ifage>=18 then print person is eligible for vote elseperson is not eligible for vote.

#include<stdio.h>
#include<conio.h>

void main()
{
	int x ;

	clrscr();

	printf("\n Enter your age : " );
	scanf("%d" , &x );

	if( x >= 18 )
	{
		printf("\n You are elidible for vote " );
	}

	else
	{
		printf("\n You are not eligible for vote " );
	}

	getch();

}