#include<stdio.h>
#include<conio.h>
 

void PrintLine(int i)
{   int cnt = i;
	for( i=-(cnt) ; i <= +(cnt) ; i++ )
	{
            printf(" %d ",i);
	}

}
int main()
{
	int num=0;
	printf("Enter Number = \n");
	scanf("%d",&num);

     
	PrintLine(num);

	printf("\n ---------------------------------------------  ");
	getch();
	return;
}
