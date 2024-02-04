#include<stdio.h>
#include<conio.h>

float CalculatTax(int income)
{
	int TotalTax = 0;
	int Tax1=0,Tax2=0,Tax3=0;
	if(income<=0 )
	{
		printf("\n Enetr the Valid Anual Income \n");
		return;
	}
	else if(1 <= income && income <= 500000)
	{
		TotalTax= Tax1+Tax2+Tax3;
		printf("%d  ( 0 ) \n",TotalTax);
		return 1;
	}
	else if(500000 < income && income < 1000000)
	{
		income = income - 500000;
		Tax1 = (income*10)/100;
		TotalTax= Tax1+Tax2+Tax3;
		printf("%d  (0    ,%d ,%d ,%d ,%d) \n ",TotalTax,Tax1,Tax2,Tax3);
		return 1;
	}
	else if(1000000 <= income && income < 2000000)
	{
		
		int tempincome = income - 1000000;
		income = income - 500000;
		Tax1 = (income*10)/100;
		Tax2 = (tempincome*20)/100;
		TotalTax= Tax1+Tax2+Tax3;
		printf("%d  (0    ,%d ,%d ,%d) \n",TotalTax,Tax1,Tax2,Tax3);
		return 1;
	}
	else if(2000000 <= income )
	{
		int temp2 = income - 2000000;
		int tempincome = income - 1000000;
		income = income - 500000;
		Tax1 = (income*10)/100;
		Tax2 = (tempincome*20)/100;
		Tax3 = ((temp2*30)/100);
		TotalTax= Tax1+Tax2+Tax3;
		printf("%d  (0    ,%d ,%d ,%d) \n",TotalTax,Tax1,Tax2,Tax3);

		return 1;
	}
}

int main()
{
	int AnualIncome=0;

	printf("Enter the total bill Amount = \n");
	scanf("%d",&AnualIncome);

	CalculatTax(AnualIncome);
	getch();
	return;
}
