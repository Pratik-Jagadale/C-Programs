#include<stdio.h>
#include<conio.h>

int main()
{
	float Pi = 3.14 , Radius = 0 , Area = 0;

	printf("Enter Radius of Circle to calculate Area :");
	scanf("%f",&Radius);

	Area = Pi * Radius * Radius ;

	printf("\n Area of Circle is : %f ",Area);
	getch();
	return 0 ;
}

