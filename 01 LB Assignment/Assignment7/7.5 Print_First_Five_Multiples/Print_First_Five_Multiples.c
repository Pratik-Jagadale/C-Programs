#include<stdio.h>
#include<conio.h>
 
void Print_FirstFiveMult(int num)
{   int i = num;
	for( i = 1 ; i <= 5 ; i++ )
	{
            printf(" %d ",i*num);
	}

}
int main()
{
	int num=0;
	printf("Enter Number = \n");
	scanf("%d",&num);

     
	Print_FirstFiveMult(num);

	printf("\n ---------------------------------------------  ");
	getch();
	return;
}
