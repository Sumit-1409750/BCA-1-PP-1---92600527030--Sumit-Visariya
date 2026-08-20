/* Write a C Program to input price quantity of an
item from user and display final payment according to
following condition.
If total purchase(price*quantity) is greater than
Rs.1000 then calculate discount 15% otherwise
calculate discount 10% of total rupees. */
#include<stdio.h>
#include<conio.h> 

void main()
{
	float price, total, quantity, discount, fa;

	clrscr();

	printf("\n Enter product price : ");
	scanf("%f", &price );

	printf("\n Enter product quantity : ");
	scanf("%f", &quantity );

	total = price * quantity ;

	if( total > 1000 )
	{
		discount = total * 15 / 100;
	}
	else
	{
		discount = total * 10 / 100;
	}

	fa = total - discount ;

    printf("\nTotal Purchase = Rs. %.2f", total);
    printf("\nDiscount = Rs. %.2f", discount);
	printf("\n Final price is : %.2f", fa);

	getch();




}