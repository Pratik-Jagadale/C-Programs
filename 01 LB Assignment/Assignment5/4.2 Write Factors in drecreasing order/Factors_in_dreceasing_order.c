#include<stdio.h>
#include<conio.h>

float Printfact(int num)
{
	int i = num/2,MFact = 1;
	int Arr[20] = {0};
	printf("\n -------------------------------------------- \n (");
	for(i = i ; i >= 1 ;i--)
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

	printf("\n Enter the Number to Finf Factors and display in Reverse manner \n\n :");
	scanf("%d",&num);

     Printfact(num);

	getch();
	return 0;
}
