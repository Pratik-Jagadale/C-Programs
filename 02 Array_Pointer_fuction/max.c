//Find Maximum numbers from Array
#include<stdio.h>
#include<conio.h>
int main()
{
	int Arr[5]={4,65,9,7,0};
	int max=0,i=0;


     //for( i=0 ; i<5 ; i++ )
     //{
	 //printf("\n Give any  integer value to find max no = %d \n"i+1);
	 //scanf("%d",&Arr[i]);
     // }
	 for( i=0 ; i<5 ; i++ )
	 {
 		if( max < i)
 		max = i ;
     }

	printf("maximum of given numbers is %d",max);
	getch();
	return 0 ;
}
