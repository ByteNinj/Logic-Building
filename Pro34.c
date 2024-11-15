#include<stdio.h>
int Display(int iNo)
{
 int iDigit=0;
 int iCnt=0;
 if(iNo<0)           //Updater
 {
   iNo=-iNo;
 }
  while(iNo>0)
  {
     
     iDigit=iNo%10;
     printf("%d\t",iDigit);
     iNo=iNo/10;
     iCnt++;
  }
   return iCnt;
}

int main()
{
     int Number=0;
     int Count=0;
     printf("Enter the number::"); 
     scanf("%d",&Number);                                    
    Count=Display(Number);
  printf("\nGiven Number contain %d digits",Count);
    return 0;
}