#include<stdio.h>
int DigitSum(int iNo)
{
  int Sum=0;
  int iDigit=0;
  if(iNo<0)             //Updater
  {
    iNo=-iNo;
  }

  while(iNo!=0)    
  {
     iDigit=iNo%10;
     Sum=Sum+iDigit;
     iNo=iNo/10;      //Condition 
  }
  return Sum;
}
int main()
{
    int iValue=0;
    int iRes=0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    iRes=DigitSum(iValue);
   printf("Sum Of All Digit is %d",iRes);
 
    return 0;
}