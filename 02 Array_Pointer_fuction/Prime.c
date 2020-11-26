#include<stdio.h>
#include<conio.h>
int main()
{
  int num = 0,i = 0;
  printf("\n Enter The Any Entger Vale= ");
  scanf("%d",&num);

 for(i=2;i<num;i++)
 {
  if(num%i==0)
   printf("\n Given Number is Prime");
   else
    printf("\n Given Number is Not Prime");
 }
 return 0 ;
 getch();
}
