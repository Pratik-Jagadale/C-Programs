#include<stdio.h>
#include<conio.h>

typedef int BOOL ;
#define TRUE 1  
#define FALSE 0 

BOOL ChkGreater(int num,int num2)
{
	if(num==num2)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int num=0,num2=0;
	int Bret = FALSE;
	printf("Enter the two numbers = \n");
	scanf("%d%d",&num,&num2);

    Bret= ChkGreater(num,num2);
    if (Bret == 1)
    {
    	printf("\n Number is equal  ");
    }
	else
	{
		printf("\n Number is Not Equal  ");
	}
		printf("\n ---------------------------------------------  ");
	getch();
	return;
}
