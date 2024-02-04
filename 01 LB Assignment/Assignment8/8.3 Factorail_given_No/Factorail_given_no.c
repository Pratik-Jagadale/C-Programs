#include<stdio.h>
#include<conio.h>

 

int Factorail(int num)
{
	int temp = 1;
	if(num<0 )
	{
		printf("Enter Valid No...");
		return -1;
	}
	else
	{
		printf("\n---------------------------------------------\n (");
			while(num >= 1)
		{
			printf("  %d  ",num);
			temp = temp * num;
			num--;
		}
			printf(") \n -------------------------------------------\n");
			printf(" %d \n ",temp);
	}
	return 0;
}
int main()
{
	int num=0,ret=0;
	printf("Enter the number = \n");
	scanf("%d",&num);

   ret= Factorail(num);

	getch();
	return;
}
