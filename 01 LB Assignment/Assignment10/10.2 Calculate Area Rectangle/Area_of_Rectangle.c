#include<stdio.h>
#include<conio.h>

int main()
{
	float Height = 3.14 , Width = 0 , Area = 0;

	printf("Enter Height of Rectangle:");
	scanf("%f",&Height);

	printf("Enter width of Rectangle:");
	scanf("%f",&Width);

	Area = Width * Height ;

	printf("\n Area of Circle is : %f ",Area);
	getch();
	return 0 ;
}

