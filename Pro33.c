#include<stdio.h>
void Display(int iNo)
{
 int iDigit=0;
 int iCnt=0;
  while(iNo!=0)
  {
     
     iDigit=iNo%10;
     printf("%d\t",iDigit);
     iNo=iNo/10;
     iCnt++;
  }
   printf("\nGiven Number contain %d digits",iCnt);
}

int main()
{
     int Number=0;
     printf("Enter the number::"); 
     scanf("%d",&Number);                                    
     Display(Number);
    return 0;
}