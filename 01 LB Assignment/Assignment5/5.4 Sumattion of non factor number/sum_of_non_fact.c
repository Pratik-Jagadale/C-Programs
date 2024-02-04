#include<stdio.h>
#include<conio.h>

int Sumfact(int num)
{
	int i = 0,sum = 0 ;
	for(i = 1 ; i <= num ;i++)
	{
		if(num%i != 0)
		{
			sum = sum + i;
		}
	}	
  return sum;
}
int main()
{
	int num =0 ,sum = 0;

	printf("\n Enter the Number to calculatsum of  non factor of given number \n\n :");
	scanf("%d",&num);

    sum = Sumfact(num);

    printf("sum of non fact numbers : %d \n",sum);
	getch();
	return 0;
}
