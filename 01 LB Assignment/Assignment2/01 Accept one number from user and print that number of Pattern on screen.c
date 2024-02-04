
////////////////////////////////////////////////////
//
//Accept one number from user and print that number of * on screen.........
//
///////////////////////////////////////////////////


#include<stdio.h>
void Accept(int iNo)
{
   int iCnt = 0,cnt=0;

    printf("Enter number to which numbers of stars to print \n");
    scanf("%d",&cnt);
   for(iCnt = 0 ; iCnt < cnt ; iCnt++)
    {
     printf("*");
    };
}
int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);
   return 0;
 }
