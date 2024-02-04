#include<stdio.h>
#include<conio.h>
 

float Percentage(int num,int num2)
{
	int Per = 0;
	if(num <= 0 || num2 <= 0 )
	{
		return -1;
	}
	Per = (num*num2)/100;
	return Per ;
}
int main()
{
	int num=0,num2=0,Per=0;
	printf("Enter Obtained Marks = \n");
	scanf("%d",&num);

	printf("Enter Total Marks = \n");
	scanf("%d",&num2);

    Per= Percentage(num,num2);

    if (Per == -1)
    {
		printf("\n Enter Valid Numbers");
    }
	else
	{
		printf("\n You have Obtained    %d    Percetage",Per);
	}
		printf("\n ---------------------------------------------  ");
	getch();
	return;
}
