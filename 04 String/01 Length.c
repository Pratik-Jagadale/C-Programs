//Find Length of given string
#include<stdio.h>
#include<conio.h>

int main()
{
   char ch[10];
   printf("\n Enter the String to find the length of string : \n");
   scanf("%s",ch);

   printf("Length of given string is : %d ",len(ch));


}
int len(char *ch)
{
    int length=0;

    for(length=0;*ch!='\0';*ch++,length++);
    return length;
}
