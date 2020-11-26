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

    printf("\n Student Name = %s,\n Roll Number = %d,\n Course = %s,\n City = %s",Name,Roll_Number,Course,City);
	//printf("\n %-5d %-8s %-4d %-4d %-4d %-6f",255,"Amit",18,81,140,50.65);
	//printf("\n %-5d %-8s %-4d %-4d %-4d %-6f",145,"pratik",23,89,240,89.65);
	//printf("\n %-5d %-8s %-4d %-4d %-4d %-6f",255,"ashish",28,83,240,96.65);

    getch();
    return 0;
}
