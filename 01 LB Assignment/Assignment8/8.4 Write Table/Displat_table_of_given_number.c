#include<stdio.h>
#include<conio.h>

 

int DisplayTable(int num)
{
	int i = 1;

		printf("\n---------------------------------------------\n (");
			while(i <= 10)
		{
			printf("  %d  ",i*num);
			i++;
		}
			printf(") \n -------------------------------------------\n");
	return 0;
}
int main()
{
	int num=0;
	printf("Enter the number to print Table = \n");
	scanf("%d",&num);

    DisplayTable(num);

	getch();
	return;
}
