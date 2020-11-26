//find Power of given no
#include<stdio.h>
#include<conio.h>
int main()
{
	int x=0,y=0,z=0;


	 printf("\n Enter the number = ");
	 scanf("%d",&x);

	 printf("\n Enter the number to Power = ");
	 scanf("%d",&y);


	 printf("\n Enter the number to Power to Power = ");
	 scanf("%d",&z);

	//Power(x,y);

	printf("\n------------------------------------------------\n");

	printf("\nPower of %d^%d^%dis %d",x,y,z,Power(x,(Power(y,z))));

	getch();
	return 0;

}

int Power(int num1,int num2)
{
    int pwr=2,i=0;
	   for( i=1 ; i<=num2 ; i++ )
	   {
 	  	pwr=num1*num1;

   	  }
    return pwr ;
}
