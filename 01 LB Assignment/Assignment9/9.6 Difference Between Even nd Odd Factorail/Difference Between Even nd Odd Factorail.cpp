#include<stdio.h>
#include<conio.h>

int Evenfact(int num)
{
  int i = 1 ,Fact = 1 ;
  while( i <= num )
  {
	  while(i % 2 == 0 )
	  {
	   Fact = Fact * i ;
	   i++;
	  }
	  i++;
  }
  return Fact ;
}

int oddfact(int num)
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
	int num = 0 ,iRet=0, jRet = 0 , Temp = 0;

	printf("\n Enter the number to print Difference between Even Factorail and odd Factorail : \n ");
	scanf("%d",&num);

	Temp = (iRet = Evenfact(num) ) - ( jRet = oddfact(num));

	printf("------------------------------------");
	printf("\n  Difference Between Even And odd Factorail is : %d \n ",Temp);
	printf("------------------------------------");

	getch();
}