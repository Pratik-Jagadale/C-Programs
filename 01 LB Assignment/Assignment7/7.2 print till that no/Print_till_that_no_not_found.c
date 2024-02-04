#include<stdio.h>
#include<conio.h>
 

void Printno(int i)
{   int cnt = i;
	for(i=1;i<=cnt;i++)
	{
            printf(" %d ",i);
	}

}
int main()
{
	int num=0;
	printf("Enter Number = \n");
	scanf("%d",&num);

     Printno(num);

	printf("\n ---------------------------------------------  ");
	getch();
	return;
}
