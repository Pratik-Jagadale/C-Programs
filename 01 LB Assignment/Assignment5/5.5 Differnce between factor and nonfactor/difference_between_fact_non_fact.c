#include<stdio.h>
#include<conio.h>

void Sumfact(int num)
{
	int i = 1,sum = 0 ,Nsum = 0,diff=0;
	if(num<=0)
	{
		return ;
	}
	for(i = 1 ; i < num ;i++)
	{
		if(num%i == 0)
		{
			sum = sum + i;
		}
		else if (num%i != 0)
		{
			Nsum = Nsum + i;
		}
	}
	printf("Sum of Factor number is : %d  ",sum);
	
	printf("Sum of Non Factor number is : %d \n",Nsum);

	diff = sum - Nsum ;

	printf("Differnce between sumation of factors and non factors : %d \n",diff);

  return ;
}

int main()
{
	int num =0 ,sum = 0;

	printf("\n Enter the Number to calculatsum difference between sum factor and  non factor of given number \n\n :");
	scanf("%d",&num);

     Sumfact(num);

	getch();
	return 0;
}
