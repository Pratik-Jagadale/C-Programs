//Find given string is pallindrome
#include<stdio.h>
#include<conio.h>
int is_Pallindrome(char *);
int main()
{
   char ch[10];

   printf("\n Enter the String to find string is pallindrome or not : \n");
   gets(ch);

   int ret = is_Pallindrome(ch);

   if(ret==0)
  {
      printf("\n given string is Pallindrome ");
  }
  else if(ret==-1)
  {
    printf("given string is not pallindrome");
  }
   getch();
   return 0 ;
}
 int is_Pallindrome(char *str)
 {
     int lenth = len(str);
     char *demo = (str) + (lenth-1);
     if(*str=='\0')
     {
         return -1;
     }
     while(str<demo)
     {
      if(*str!=*demo)
      {
      return -1;
      }
      str++;
      demo--;
     }
     return 0;
 }
 int len(char *ch)
{
    int length=0;

    for(length=0;*ch!='\0';*ch++,length++);
    return length;
}
