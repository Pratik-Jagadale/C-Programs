#include<stdio.h>
#include<conio.h>

int DollarToINR(int num)
{
	int temp = 70 ;
	num = (num * 70);
	return num;
}
int main()
{
	int num=0;
	printf("Enter the USD = \n");
	scanf("%d",&num);

    int iret = DollarToINR(num);
	printf("INR  = %d ",iret);
 	getch();
	return;
}
