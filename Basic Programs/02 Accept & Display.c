////////////////////////////////////////////////////
//
//Formated Output Implementation.........
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[10],Course[5],City[4];
    int Roll_Number=0;
    printf("\n Enter The Student Name  ,Roll Number  ,Course  ,City = \n");
    scanf("%s%d%s%s",&Name,&Roll_Number,&Course,&City);

    printf("\n Student Name = %s.\n Roll Number = %d.\n Course = %s.\n City = %s",Name,Roll_Number,Course,City);




    getch();
    return 0;
}
