//Write a program that input 2 values from user and find out Maximum.


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

		if( a > b )
		{
			printf("\n A is max ");


			printf("\n Square is  %d ", a*a);
		}

		else
		{
			printf("\n B is max " );


			printf("\n Square is %d ", b * b);


		}
	}

	getch();
}
