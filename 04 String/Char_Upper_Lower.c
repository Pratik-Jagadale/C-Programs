//Measure Lenght of Character Array
#include<stdio.h>
#include<conio.h>
int main()
{
    int Len=0;
    char src[10]={'\0'};

    printf("\t Enter Any Character = ");
    scanf("%s",&src);
    printf("\n-----------------------------------------------");

    Conv_src_upper(src);
    printf("\n\n Upper Case of Given Character  = %s",src);

    Conv_src_Lower(src);
    printf("\n\n Lower Case of Given Character = %s",src);

    getch();
    return 0 ;
}

int Conv_src_upper(char *src)
{
    while(*src!='\0')
    {
        if(*src >= 97 && *src <= 128)
        {
            *src=*src-32;
        }
        src++;
    }
    return src;
}

int Conv_src_Lower(char *src)
{
    while(*src!='\0')
    {
        if(*src >= 65 && *src <= 96)
        {
            *src=*src+32;
        }
        src++;
    }
    return src;
}

