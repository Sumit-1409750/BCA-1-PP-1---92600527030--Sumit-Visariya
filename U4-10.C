#include<stdio.h>
#include<conio.h>

void main ()
{
	int i,sum;

	clrscr();

	for ( i=1; i<=10;i++)
	{
		printf("\n Enter number : ");
		scanf("%d", &i);
		sum+=i;

	}
	printf(" Sum : %d ", sum);


	getch();
}