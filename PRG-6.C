//WAP to input your percentage and display wheather it is pass or fail
#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("\n Enter any percentage: ");
	scanf("%d", &x);

	if( x > 33 )
	{
		printf("\n You are pass");
	}
	else
	{
		printf("\n You are fail");
	}
	getch();



}