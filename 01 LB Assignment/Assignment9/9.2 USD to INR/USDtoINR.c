#include<stdio.h>
#include<conio.h>

int DollarToINR(int num)
{
	num = (num * 70);
	return num;
}
int main()
{
	int num=0,iret=0;
	printf("Enter the USD = \n");
	scanf("%d",&num);

    iret = DollarToINR(num);

	printf("INR  = %d ", iret);
 	getch();
	return;

}