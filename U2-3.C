#include <stdio.h>

int main() {


    float principal,SI, rate, simpleInterest;
    int years;
	clrscr();
    // Input values
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Number of Years: ");
    scanf("%d", &years);

    SI = (principal* rate * years) / 100;
    printf("\n**********************************");
    printf("\n Principal Amount : %2f:",principal);
    printf("\n Rate of Intresent : %2f:",rate);
    printf("\n Principal Amount : %2f:",years);
    printf("\n**********************************");
    printf( "\n Simpale Interest is: %2f",SI);
    getch();

}