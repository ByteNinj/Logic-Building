#include<stdio.h>
#include<stdbool.h>
//#define TRUE 1
//#define FALSE 0
//typedef BOOL;
bool chkNumber(int iNo)
{
    int iResult=0;
    iResult=iNo%5;
  if(iResult==0)
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
    bool iRes=false;
    printf("Enter the number:");
    scanf("%d",&iValue);
   iRes=chkNumber(iValue);

    if(iRes==true)
    {
        printf("Number  Divisible by 5");
    }
    else
    {
      printf("Number not Divisible by 5");
    }

    return 0;
}