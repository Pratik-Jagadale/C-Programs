#include<stdio.h>
#include<conio.h>
 

void PrintOddNo(int i)
{   int cnt = i;
	for( i = 1 ; i <= cnt ; i++ )
	{
		if( i % 2 != 0)
		{
            printf(" %d ",i);
		}
	}

}
int main()
{
	int num=0;
	printf("Enter Number = \n");
	scanf("%d",&num);

     
	PrintOddNo(num);

	printf("\n ---------------------------------------------  ");
	getch();
	return;
}
