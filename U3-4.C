//WAP which displays odd oreven number by if condition
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();
	printf("\n Enter any number: ");
	scanf("%d",&x);

	y=x % 2;

	if(y==0)
	{
	  printf("\n Number is even");

	}
	else
	{
	   printf("\n Number is odd");
	}
	getch();
}