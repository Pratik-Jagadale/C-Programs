///////////////////////////////
//
//.Write a program which accept one number from user and print that number of even numbers on screen
//
////////////////////////////////

#include<stdio.h>
#include<conio.h>

void printEven(int iNo)
{
	int i = 0;
		if(iNo<=0)
	{
		return;
	}
	
	for(i =1 ; i<=iNo  ; i++)
		if(i % 2 == 0)
		{
			printf("\n %d",i);
		}
}

int main()
{
	int ivalue = 0;

	printf("Enter the  Number : \n");
	scanf("%d",&ivalue);

	printEven(ivalue);
	getch();
	return 0 ;
}