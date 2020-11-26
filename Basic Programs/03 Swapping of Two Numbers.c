////////////////////////////////////////////////////
//
//    Swapping of Two Numbers.........
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1=0,Num2=0,temp=0;
    printf("\n Enter The Num1 & Num2 = \n");
    scanf("%d%d",&Num1,&Num2);

    temp=Num1;
    Num1=Num2;
    Num2=temp;

    printf("\n\n Swapping Of given Numbers is \n Num1 = %d \n Num2 = %d",Num1,Num2);
    printf("\n --------------------------------------------------------------------");
    getch();
    return 0;
}
