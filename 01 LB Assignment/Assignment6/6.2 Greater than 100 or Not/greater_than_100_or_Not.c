#include<stdio.h>
#include<conio.h>

typedef int BOOL ;
#define TRUE 1  
#define FALSE 0 

BOOL ChkGreater(int num)
{
	if(num<0)
	{
		printf("Enter Valid No...");
		return -1;
	}
	else if(num>=0 && num<=100)
	{
		return TRUE;
	}
	else if(num>100)
	{
		return FALSE;
	}
}
int main()
{
	int num=0;
	int Bret = FALSE;
	printf("Enter the number = \n");
	scanf("%d",&num);

    Bret= ChkGreater(num);
    if (Bret == 1)
    {
    	printf("\n Number is smaller  ");
    }
	else
	{
		printf("\n Number is greater  ");
	}
	getch();
	return;
}
