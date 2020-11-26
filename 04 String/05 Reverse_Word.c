//Find Reverse of given words in string
#include<stdio.h>
#include<conio.h>
void strevX(char *);
int main()
{
   char ch[50]="\0";

   printf("\n Enter the String to Reverse words : \n");
   gets(ch);

   strevX(ch);

   printf("\n Reversed words are : \n%s ",ch);
   printf("\n -------------------------------------------------");
   return 0 ;

}

 void strevX(char *str)
{
    char *ptr=NULL;
    char *eptr=NULL;
    char temp;
    int cnt=0;

    while(str!='\0')
    {
        cnt = 0;
        while(*str==' ')
        {
            str++;
        }

        if(*str == '\0')
        {
            break;
        }

        while(*str!=' ' && *str!='\0')
        {
            str++;
            cnt++;
        }
        ptr=str-cnt;
        eptr=str-1;

        while(ptr < eptr)
        {
            temp = *ptr;
            *ptr = *eptr;
            *eptr = temp;
            ptr++;
            eptr--;
        }
    }
 }
