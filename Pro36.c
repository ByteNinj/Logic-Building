
//Even dIGIT
#include<stdio.h>
int  Display(int iNo)
{
 int iDigit=0;
 int iCnt=0;
  while(iNo!=0)
  { 
    iDigit=iNo%10;
    if(iDigit%2!=0)
    {
      iCnt++;

    }
     iNo=iNo/10;
  }
   return iCnt;
}

int main()
{
     int Number=0;
     int Ans=0;
     printf("Enter the number::"); 
     scanf("%d",&Number);                                    
     Ans=Display(Number);
     printf("Odd Digits in given No Is:::%d",Ans);
    return 0;
}