////////////////////////////////////////////////////
//
//   Even or Odd .........
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int num=0,ret=0;

    printf("\n Enter Number =\n");
    scanf("%d",&num);
    ret=evn_odd(num);
    if(ret==1)
    {
     printf("\n given numbers is Even...");
    }
    else if (ret == 0)
    {
    printf("\n given numbers is Odd...");
    }
    printf("\n --------------------------------------------------------------------");
    getch();
    return 0;
}

int evn_odd(int num)
{
    int i=0;
    for( i=2 ; i<=num ; i++ )
    if( num%i == 0 )
    {
    return 1;
    break;
    }
    else if(num%i == 1 )
    {
    return 0;
    break;
    }
}

