////////////////////////////////////////////////////
//
//   Maximum From Two Numbers.........
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1=0,num2=0,temp=0;

    printf("\n Enter Two Numbers =\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        temp = num1;
    else
        temp = num2;

    printf("\n Maximum Form given two numbers is =%d ",temp);

    printf("\n --------------------------------------------------------------------");
    getch();
    return 0;
}
