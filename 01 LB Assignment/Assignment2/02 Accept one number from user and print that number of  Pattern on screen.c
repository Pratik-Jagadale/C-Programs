

void Display(int iNo)
{
  int i = 0 ;
  printf("------------------ \n\n ");
   while( iNo > i)
   {
     printf(" * ");
     iNo--;
   }
   printf("\n ------------------ \n ")
}
int main()
{
   int iValue = 0;
   printf("Enter number : \n\n ");
   scanf("%d",&iValue);
   Display(iValue);
   return 0;
 }
