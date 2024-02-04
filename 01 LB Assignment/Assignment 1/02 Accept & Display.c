////////////////////////////////////////////////////
//
//Program to divide two numbers.........
//
///////////////////////////////////////////////////

#include<stdio.h>
int Divide(int No1, int No2)
 {
   int iAns = 0;

   if(No2<No1)
   {
      return -1;
   }
   iAns = No1 / No2;
   return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;
    iRet = Divide(&iValue1,&iValue2);

    printf("Division is %d",iRet);
    return 0;
}
