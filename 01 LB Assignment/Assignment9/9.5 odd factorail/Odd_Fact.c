#include<stdio.h>
#include<conio.h>

int Evenfact(int num)
{
  int i = 1 ,Fact = 1 ;
  while( i <= num )
  {
	  while(i % 2 == 1 )
	  {
	   Fact = Fact * i ;
	   i++;
	  }
	  i++;
  }
  return Fact ;
}
int main()
{
	int num = 0 ,iRet=0;

	printf("\n Enter the number to print Even Factorail of given number \n ");
	scanf("%d",&num);

	iRet = Evenfact(num);

	printf("------------------------------------");
	printf("\n Even Factorail of %d is = %d \n",num,iRet);
	printf("------------------------------------");

	getch();
}