#include<stdio.h>
#include<conio.h>
void casConv(char ch)
{
  if (ch == '\0' )
  {
	  return;
  }
  if (65 >= ch && ch <=90)
  {
	  ch = ch + 32;
	  printf("\n  = %c  \n",ch);
	  return ;
  }
    else if (97>= ch && ch <=122)
  {
	  ch = ch - 32;
	  printf("\n = %c  \n",ch);
	  return;
  }
}
int main()
{
	char ch='\0';

	printf("print any charter to convert Case :\n ");
	scanf("%c",&ch);

	casConv(ch);

	getch();
	return;
}
