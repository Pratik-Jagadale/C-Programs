#include<stdio.h>
#include<conio.h>

float CalculatTax(int std)
{
	if(0 >= std && std >= 5 )
	{
		printf("invalid Standard ");
	}
	else if(std == 1)
	{
		printf("\n Standard %d have  8900 Fee.",std);
	}
	else if(std == 2)
	{
		printf("Standard %d have  12790 Fee",std);
	}
	else if(std == 3)
	{
		printf("Standard %d have  21000 Fee",std);
	}
	else if(std == 4)
	{
		printf("Standard %d have   23450 Fee",std);
	}

}

int main()
{
	int Standard=0;

	printf("Enter the Standard = \n");
	scanf("%d",&Standard);

	CalculatTax(Standard);
	getch();
	return;
}