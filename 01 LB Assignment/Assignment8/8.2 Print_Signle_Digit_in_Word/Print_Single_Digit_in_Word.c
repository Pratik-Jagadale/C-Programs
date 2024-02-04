#include<stdio.h>
#include<conio.h>

 

int PrintinWord(int num)
{
	if(num<-10 || num>10)
	{
		printf("Enter Valid No...");
		return -1;
	}
	else if(num==0 )
	{
		printf("\n ONE");
		return 1;
	}
	else if(num==1|| num==(-1))
	{
		printf("\n ONE");
		return 1;
	}
	else if(num==2|| num==(-2))
	{
		printf("\n TWO");
		return 1;
	}
	else if(num==3|| num==(-3))
	{
		printf("\n THREE");
		return 1;
	}
	else if(num==4|| num==(-4))
	{
		printf("\n FOUR");
		return 1;
	}
	else if(num==5|| num==(-5))
	{
		printf("\n FIVE");
		return 1;
	}
	else if(num==6|| num==(-6))
	{
		printf("\n SIX");
		return 1;
	}
	else if(num==7|| num==(-7))
	{
		printf("\n SEVEN");
		return 1;
	}
	else if(num==8|| num==(-8))
	{
		printf("\n EIGHT");
		return 1;
	}
	else if(num==9|| num==(-9))
	{
		printf("\n NINE");
		return 1;
	}
	return 0;
}
int main()
{
	int num=0;
	printf("Enter the number = \n");
	scanf("%d",&num);

    PrintinWord(num);

	getch();
	return;
}
