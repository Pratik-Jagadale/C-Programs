#include<stdio.h>
#include<conio.h>
 

void Pattern(int i)
{   int cnt = i;
	for(i=1;i<=cnt;i++)
	{
		if(i%2==0)
		{
            printf(" $ ");
		}
		else
		{
			printf(" *  ");
		}
	}
	return  ;
}
int main()
{
	int num=0;
	printf("Enter Number = \n");
	scanf("%d",&num);

     Pattern(num);

		printf("\n ---------------------------------------------  ");
	getch();
	return;
}
