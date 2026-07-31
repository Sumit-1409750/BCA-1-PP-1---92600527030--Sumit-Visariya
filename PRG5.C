//WAP which displays possitive or nagetive numbers by if condition
#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();
	printf("\n Enter any number: ");
	scanf("%d",&x);



	if(x>=0)
	{
	  printf("\n Number is Possitive");

	}
	else
	{
	   printf("\n Number is Nagative");
	}
	getch();
}