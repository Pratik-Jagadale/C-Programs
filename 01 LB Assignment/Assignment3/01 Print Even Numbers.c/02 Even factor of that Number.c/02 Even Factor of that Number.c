////////////////////////////////
//
// Write a program which accept number from user and print even factors of that number
//
////////////////////////////////
#include<stdio.h>
#include<conio.h>
void EvenFact(int num)
{
	int i = 0;
	if(num<=0)
	{
		return;
	}
	for(i=0;i<=num;i++)
	{
		if(i%2==0 && num%i==0)
		{
			
				printf("%d",i);
		
		}
	}
}
int main(void)
{
	int num=0;

	printf("\n Enter Number to Find Even Factors of that Number :\n");
	scanf("%d",&num);

	EvenFact(num);

	getch();
	return;

}