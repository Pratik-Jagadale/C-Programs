#include<stdio.h>
#include<conio.h>

float Cal_Rent(int Travel)
{
	int Rent = 0;

	if (Travel <= 0)
	{
		printf("Enter Valid Kilometers");
		return 1;
	}
	else if(1 <= Travel && Travel <=100)
	{
		Rent = Travel * 25; 
		printf("Rent of car is = %d",Rent);
	}
	else if(100 <= Travel )
	{
		Rent = Travel * 15; 
		printf("Rent of car is = %d",Rent);
	}
}

int main()
{
	int Travel =0 ;

	printf("Enter the total Travled Kilometer = \n");
	scanf("%d",&Travel);

	Cal_Rent(Travel);
	getch();
	return;
}
