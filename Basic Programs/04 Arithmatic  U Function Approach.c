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

    printf("\n Addition Of given Numbers is = %d ",Add(Num1,Num2));
    printf("\n Substraction Of given Numbers is = %d ",Sub(Num1,Num2));
    printf("\n Multiplication Of given Numbers is = %d ",Mult(Num1,Num2));
    printf("\n Division Of given Numbers is = %d ",Div(Num1,Num2));

    printf("\n --------------------------------------------------------------------");
    getch();
    return 0;
}
int Add(int num1,int num2)
{
    int add=0;
    add=num1+num2;
    return add;
}
int Sub(int num1,int num2)
{
    int sub=0;
    sub=num1-num2;
    return sub;
}
int Mult(int num1,int num2)
{
    int mult=0;
    mult=num1*num2;
    return mult;
}
int Div(int num1,int num2)
{
    int div=0;
    div=num1/num2;
    return div;
}
