#include<stdio.h>
#include<conio.h>
 

int Mult(int num,int num2,int num3)
{
	int Mult = 0;
	if(num <= 0 || num <= 0 || num<=0)
	{
		printf("Enter Valid Number....");
		return -1;
	}
	Mult = num*num2*num3;
	return Mult ;

}
int main()
{
	int num=0,num2=0,num3=0;
	int Bret = 0;
	printf("Enter the two numbers = \n");
	scanf("%d%d%d",&num,&num2,&num3);

    Bret= Mult(num,num2,num3);
    if (Bret == -1)
    {
    	return;
    }
	else
	{
		printf("\n Multiplication of three numbers : %d",Bret);
	}
		printf("\n ---------------------------------------------  ");
	getch();
	return;
}
