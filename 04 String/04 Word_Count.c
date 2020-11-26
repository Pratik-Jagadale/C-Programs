/////////////////////////////////////////
//
//     Program for count words in String...
//
/////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
   char ch[50];
   printf("\n Enter the String to Count words in given string : \n");
   gets(ch);

   printf("\n given string contains _  %d  _ words.",W_cnt(ch));

    printf("\n-----------------------------------------------------\n");
   getch();
   return 0 ;
}

 int W_cnt(char *str)
 {
     int cnt=0;

     if(*str=='\0')
     {
         return -1;
     }
     while(*str!='\0')
     {
        while(*str ==' ')
        {
            *str++;
        }
        if(*str== '\0')
        {
            break;
        }

        while(*str != ' '&&*str!='\0')
        {
            *str++;
        }
        cnt++;
    }
     return cnt;
 }
