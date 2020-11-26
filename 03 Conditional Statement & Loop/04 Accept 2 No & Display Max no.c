////////////////////////////////////////////////////
//
//   Accept 2 No & Display Max no .........
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1=0,num2=0,temp=0;

    printf("\n Enter two Numbers =\n");
    scanf("%d%d",&num1,&num2);

    if(num1==num2)
    {
     printf("\n given number Equal...");
    }
    else if (num1<num2)
    {
    printf("\n %d is Maximum number..",num2);
    }
    else if (num1>num2)
    {
    printf("\n %d is Maximum number..",num1);
    }


    printf("\n --------------------------------------------------------------------");
    getch();
    return 0;
}
