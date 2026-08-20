/* Write a program that Input Salary From the user if
salary Greater than or equal to 5000 then hr=5% of
basic salary, ta=6% of basic salary, da=4% of basic
salary and pf=5% of basic salary. but if salary is less
than 5000 then hra=4%,ta=5%,da=3% and
pf=4%.find out gross salary. printhra,ta,da,pf and
gross salary(Hint : take all variable as float. formula
for gross salary=salary+hra+ta+da- pf). */
#include <stdio.h>
#include<conio.h>

void main()
{
    float salary, hra, ta, da, pf, gross_salary;

    clrscr();

    printf("Enter basic salary: ");
    scanf("%f", &salary);

    


    if (salary >= 5000)
    {
        hra = salary * 5 / 100;
        ta = salary * 6 / 100;
        da = salary * 4 / 100;
        pf = salary * 5 / 100;
    }
    else
    {
        hra = salary * 4 / 100;
        ta = salary * 5 / 100;
        da = salary * 3 / 100;
        pf = salary * 4 / 100;	
    }


    gross_salary = salary + hra + ta + da - pf;


    printf("\nHRA = %.2f", hra);
    printf("\nTA = %.2f", ta);
    printf("\nDA = %.2f", da);
    printf("\nPF = %.2f", pf);
    printf("\nGross Salary = %.2f", gross_salary);

    getch();
}