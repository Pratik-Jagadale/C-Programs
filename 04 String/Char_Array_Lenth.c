//Measure Lenght of Character Array
#include<stdio.h>
#include<conio.h>
int main()
{
    int Len=0;
    char Arr[10]={'\0'};

    printf("eEnter Any Character = ");
   // scanf("^[\0]",&Arr);
    scanf("%s",&Arr);
    //gets(Arr);

    printf("Lenght of character = %d",Lenght_Arr(Arr));

    getch();
    return 0 ;
}

int Lenght_Arr(char *Arr)
{
    int cnt=0;
    while(*Arr!='\0')
    {
        cnt++;
        *Arr++;
    }
    return cnt;
}
