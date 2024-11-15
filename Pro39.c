#include<stdio.h>
int Reverse(int iNo)
{
  int iRev=0;
  int iDigit=0;
  if(iNo<0)             //Updater
  {
    iNo=-iNo;
  }

  while(iNo!=0)    
  {
     iDigit=iNo%10;
    iRev=iRev*10+iDigit;
     iNo=iNo/10;      //Condition 
  }
  return iRev;
}
int main()
{
    int iValue=0;
    int iRes=0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    iRes=Reverse(iValue);
   printf("Reverse Number is: %d",iRes);
 
    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              