#include<stdio.h>
#include<stdbool.h>
bool chkPerfect(int iNo)
{ 
    int iCnt=0;
    int iSum=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
           iSum=iSum+iCnt;

        }

    }
  if(iSum==iNo)
  {
    return true;
  }
  else
  {
   return false;
  }

   
}
int main()
{ 
    int iValue=0;
    bool iRet=false;
    printf("Enter the number:");
    scanf("%d",&iValue);
    iRet=chkPerfect(iValue);
    if(iRet==true)
    {
        printf("%d is perfect number",iValue);
    }
    else
    {
         printf("%d is not perfect number",iValue);
    }


   return 0;
}

//O(N/2)