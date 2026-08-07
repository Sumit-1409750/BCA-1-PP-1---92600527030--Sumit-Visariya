//WAP that input quantity, price and discount and display final amount

#include<stdio.h>
#include<conio.h>

void main()
{
	int q,p,d,t;
	float drs,fa;

	clrscr();
	printf("*********************");
	printf("\n QTY           : ");
	scanf("%d", &q);

	printf("\n Price         :  Rs");
	scanf("%d", &p);

	printf("\n____________________");

	t= q * p;
	printf("\n Total         : %d   Rs" ,t);


	printf("\n Disc. (\%)    : ");
	scanf("%d", &d);

	drs=(t * d)/ 100.0;
	printf("\n Disc. (Rs.)   : %.2f  ", drs);


	printf("\n ______________________");

	fa= t - drs;
	printf("\n Final Amounst : %.2f Rs", fa);

	getch();





}