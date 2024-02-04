#include<stdio.h>
#include<conio.h>

float Printfact(int num)
{
	int i = 1;
	int Arr[100] = {0};
	printf("\n -------------------------------------------- \n (");
	for(i = 1 ; i <= num ;i++)
	{
		if(num%i != 0)
		{
			Arr[i] = i;
			printf(" %d ",Arr[i]);
		}
	}
	printf(") \n -------------------------------------------- \n");
	return 0;
}

int main()
{
	int num =0 ;

	printf("\n Enter the Number to Find non factor of guven number \n\n :");
	scanf("%d",&num);

     Printfact(num);

	getch();
	return 0;
}
