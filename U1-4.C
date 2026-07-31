//WAP which is displays total marks
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e,z;
	clrscr();
	printf("\n Enter value of Stat: ");
	scanf("%d",&a);

	printf("\n Enter value of SPCC: ");
	scanf("%d",&b);

	printf("\n Enter value of English: ");
	scanf("%d",&c);

	printf("\n Enter value of Economic: ");
	scanf("%d", &d);

	printf("\n Enter value of Account: ");
	scanf("%d",&e);

	z=a+b+c+d+e;
	printf("\n Answer is %d",z);
	getch();

}