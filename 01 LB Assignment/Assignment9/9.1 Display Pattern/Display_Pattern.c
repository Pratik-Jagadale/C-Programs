#include<stdio.h>
#include<conio.h>

int DisplayPattern(int num)
{
	int i = 1;
	while(i  >=  num)
	{
	 while(i >= num/2)
	 { 
	  	 printf("*");
		 i++;
	 }
	printf("#");
		i++;
	}
}
int main()
{
	int num=0;
	printf("Enter the number = \n");
	scanf("%d",&num);

    DisplayPattern(num);
 	getch();
	return;
}
