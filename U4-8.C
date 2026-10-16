// Write a program to print 0 1 1 2 3 5 8 13.....n

#include<stdio.h>
#include<conio.h>

void main ()
{
	int n1=0, n2=1,n, s;
	clrscr();

	s= n1+n2;

	printf("\n Enter Value of N : ");
	scanf("%d", &n);

	printf("\n  %d  %d  %d", n1,n2,s);

	while ( s<=n)
	{
		n1= n2;
		n2= s;
		s= n1+ n2;
		printf("  %d",s);

	}
	getch();



}