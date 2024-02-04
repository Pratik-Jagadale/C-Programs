#include<stdio.h>
#include<conio.h>


int ChkGreater(int num)
{
	if(num<0)
	{
		printf("Enter Valid No...");
		return -1;
	}
	else if(num>=0 && num<=50)
	{
		return 0;
	}
	else if(num>50 && num<=100)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}
int main()
{
	int num=0;
	int Bret = 0;
	printf("Enter the number = \n");
	scanf("%d",&num);

    Bret= ChkGreater(num);
    if (Bret == 0)
    {
    	printf("\n Number is smaller  ");
    }
	else if(Bret == 1)
	{
		printf("\n Number is Medium  ");
	}
	else if(Bret == 2)
	{
		printf("\n Number is greater  ");
	}
	getch();
	return 0;
}
