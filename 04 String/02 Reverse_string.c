//Find Reverse of given words in string
#include<stdio.h>
#include<conio.h>
int len(char *);
void ctrevX(char *);
int main()
{
   char ch[50];
   printf("\n Enter the String to Reverse words : \n");
   gets(ch);

   strevX(ch);

   printf("\n Reversed words are : \n %s ",ch);
   printf("\n -------------------------------------------------");

   getch();
   return 0 ;

}

 void strevX(char *str)
 {
     char *ptr=str;
     char *temp;
     if(*str=='\0')
     {
         printf("\n given string is empty");
     }

     while(*str!='\0')
     {
         while(*str!=' ')
         {
             str++;
             ptr++;
         }

        while(*ptr==' ')
        {
            ptr++;
        }

        temp=*ptr+1;


         while(str<ptr)
        {
        *temp = *str;
        *str = *ptr;
        *ptr = *temp;

        str++;
        ptr--;
        }
        str=*temp;
        ptr=*temp;
     }
 }
