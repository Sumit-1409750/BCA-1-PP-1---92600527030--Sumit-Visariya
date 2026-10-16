/* Write a program to print multiplication table of
inputted number. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2, m;
	clrscr();

	printf("\n Enter the number : ");
	scanf("%d", &n1);

	for ( n2=1; n2<=10; n2++ )
	{
		printf("\n %d x %d = %d ", n1,n2,m= n1*n2);

	}
	getch();

}