////////////////////////////////////////////////////
//
//   Prime or Not .........
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int num=0,ret=0;

    printf("\n Enter Number =\n");
    scanf("%d",&num);
    ret=Isprime(num);
    if(ret==1)
    {
     printf("\n given numbers is Prime...");
    }
    else if (ret == 0)
    {
    printf("\n given numbers is Not Prime...");
    }
    printf("\n --------------------------------------------------------------------");
    getch();
    return 0;
}

int Isprime(int num)
{
    int i=0;
    for( i=2 ; i<=num ; i++ )
    if( num%i == 0 )
    {
    return 1;
    }
    else
    {
    return 0;
    }
}

