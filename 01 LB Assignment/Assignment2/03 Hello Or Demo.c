
////////////////////////////////////////////////////
//
//Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”.
//
///////////////////////////////////////////////////

void Display (int iNo)
{
  if(iNo < 11)
  {
    printf("\n Hello  \n");
  }
  else
  {
    printf("\n Demo \n");
  }
}
int main()
{
  int iValue = 0;
  printf("Enter number : \n");
  scanf("%d" ,&iValue);
  Display(iValue);
  return 0;
}
