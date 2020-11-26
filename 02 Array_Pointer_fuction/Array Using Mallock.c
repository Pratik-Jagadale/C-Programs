#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  int ecnt=0,*iptr = NULL;
  printf("Enter The number to Make Array size = ");
  scanf("%d",&ecnt);

  iptr=(int*)malloc(ecnt*sizeof(int));

   accept(ecnt,iptr);
   display(ecnt,iptr);

   return 0;
   getch();
}
void accept(int cnt,int *iptr)
{
    int i =0;
    for(i=0;i<cnt;i++)
    {
        printf("\n\n Enter The Number %d =",i+1);
        scanf("%d",&iptr[i]);
    }
}
void display(int cnt,int *iptr)
{
    int i =0;
    for(i=0;i<cnt;i++)
    {
        printf("\n Entered Numbers is %d = %d",i+1,iptr[i]);
    }
}
