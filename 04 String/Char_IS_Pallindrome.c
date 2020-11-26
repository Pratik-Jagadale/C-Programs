//Measure Lenght of Character Array
#include<stdio.h>
#include<conio.h>
int main()
{
    int Len=0;
    char src[10]={'\0'};

    printf("\t\t Enter Any Character = \n------------------------------------------------------\n");
    scanf("%s",&src);

	int Ret=IS_Palindrome(src);
    if(Ret==1)
    {

    printf("\n\n given character is Pallindrome...");
    }

    getch();
    return 0 ;
}

int Is_Palindrome(char *src)
{
    char temp={'\0'};
    int cnt=Length_src(src);
    char *rev= (src) + (cnt-1);

    while(*src<*rev)
    {
        if(*src!=*rev)
        {
            return -1;
        }
        src++;
        rev++;
    }
	return 1;
}

int Length_src(char *src)
{
    int cnt=0;

    while(*src!='\0')
        {
            cnt++;
            *src++;
        }
        return cnt;
}
