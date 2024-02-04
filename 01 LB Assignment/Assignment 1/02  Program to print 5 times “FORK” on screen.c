////////////////////////////////////////////////////
//
//Program print fork 5 times.........
//
///////////////////////////////////////////////////


#include<stdio.h>

void Display()
{
     int i = 0;
     printf(" -------------------------------- \n\n",i);
     for(i = 1; i<= 5 ;i++)
     {
        printf("|         %d   Fork           |\n",i);
     }
      printf("\n-------------------------------- ",i);

}

int main()
{
    Display();
    return 0;
 }
