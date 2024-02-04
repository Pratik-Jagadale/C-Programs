#include<stdio.h>
#include<conio.h>

float Cal_fact(int num)
{
	int i = 1,MFact = 1;
	int Arr[20] = {0};
	printf("\n -------------------------------------------- \n (");
	for(i = 1 ; i <= num/2 ;i++)
	{
		if(num%i == 0)
		{
			Arr[i] = i;
		 MFact = MFact * i ;
		 printf(" %d ",Arr[i]);
		}
	}
	printf(") \n -------------------------------------------- \n");
	return MFact;
}

int main()
{
	int num =0 ;

	printf("\n Enter the Number to Calculate Factor and its Multiplication   \n\n :");
	scanf("%d",&num);

	int fact =Cal_fact(num);

	printf("Multiplication of Factor is %d",fact);
	getch();
	return 0;
}
