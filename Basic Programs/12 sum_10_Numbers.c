//sum of 10 numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,sum=0,temp=0;
    while( i < 10 )
    {
        printf(" Enter no %d : \n",i+1);
        scanf("%d",&temp);
        sum=sum+temp;
        i++;
    }
    printf("\n Sum of 10 numbers is = %d \n",sum);
    printf("\n-----------------------------------------------\n");
}
