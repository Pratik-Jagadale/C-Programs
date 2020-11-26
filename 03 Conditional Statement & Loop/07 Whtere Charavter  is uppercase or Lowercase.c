////////////////////////////////////////////////////
//
//   Accept 3 No & Display Max no .........
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\n Enter any Character to find Chater was Upper or Lower case =\n");
    scanf("%d%d",&num1);

    swap(&num1,&num2);

    printf("\n Swapping of Two Numbers is  \n %d \n %d ",num1,num2);
    printf("\n --------------------------------------------------------------------");
    getch();
    return 0;
}
void swap(int i,int j)
{
    int temp=0;

    temp=&i;
    &i=&j;
    &j=temp;
}
