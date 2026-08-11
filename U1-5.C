// WAP which display number of square and cube.

#include<stdio.h>
#include<conio.h>

void main()
{
	int x , s , c ;

	clrscr();

	printf("\n Enter any number : " );
	scanf("%d" , &x );

	s = x * x ;
	c = x * x * x ;

	printf("\n Squar is : %d " , s );
	printf("\n Cube is : %d " , c );

	getch();

}

