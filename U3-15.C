/* Input RollNumber, Marks of 5 Subjects and find
out Total, Percentage, Result and Grade. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int roll, s1, s2, s3, s4, s5, total;
	float per;

	clrscr();

	printf("\n Enter Your Roll no. : ");
	scanf("%d", &roll );

	printf("\n Enter 5 Subjects marks ( Out of 100 ) : ");
	scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5 );

	total = s1 + s2 + s3 + s4 + s5 ;

	printf("\n Total : %d " , total );

	per = total / 5 ;
	printf("\n Percentage : %.2f ", per);

	if ( s1 < 35 && s2 < 35 && s3<35 && s4<35 && s5<35 )
	{
		printf("\n Result = Fail ");
		printf("\n Grade = *** ");

	}
	else
	{
		if ( per>=70 && 100>=per)
		printf("\n Grade : Dist. ");

		if ( per>=60 && 70>per)
		printf("\n Grade : First Class ");

		if ( per>=50 && 60>per)
		printf("\n Grade : Second Class ");

		if ( per>=35 && 50>per)
		printf("\n Grade : Pass Class ");


	}

	getch();



}