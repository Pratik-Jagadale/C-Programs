#include<stdio.h>
#include<conio.h>

float CalculatBill(int Amount)
{
	if(Amount<=0 )
	{
		printf("\n Enetr the Valid Amount\n");
		return;
	}
	else if(1 <= Amount && Amount <= 500)
	{

		printf("Total bill = %d \n",Amount);
		printf("Off = %d",discount);
		return 1;
	}
	else if(500 < Amount && Amount < 1500)
	{
		int discount =  (Amount*10)/100;
		printf("Total bill = %d \n ",Amount-discount);
		printf("Off = %d \n ",discount);
		return 1;
	}
	else if(1500 <= Amount )
	{
		int discount =  (Amount*15)/100;
		printf("Total bill = %d \n",Amount-discount);
		printf("Off = %d \n",discount);
		return 1;
	}
}

int main()
{
	int BillAmount=0;

	printf("Enter the total bill Amount = \n");
	scanf("%d",&BillAmount);

	CalculatBill(BillAmount);
	getch();
	return;
}
