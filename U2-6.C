// WAP to calculate average

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,average;

	clrscr();

	printf("\n Enter value of a, b, c : " );
	scanf("%d%d%d", &a,&b,&c);

	average= ( a+b+c ) / 3;

	printf("\n Average is : %d", a);
	getch();


}