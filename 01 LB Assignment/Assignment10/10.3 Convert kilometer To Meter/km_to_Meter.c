#include<stdio.h>
#include<conio.h>

int main()
{
	float KM = 3.14 , Meter = 0 ;

	printf("EnterThe Killomter:");
	scanf("%f",&KM);

	Meter = KM * 1000;

	printf("\n %f : %f ",KM,Meter);
	getch();
	return 0 ;
}

