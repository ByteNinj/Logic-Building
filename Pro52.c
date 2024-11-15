#include<stdio.h>
#include<stdlib.h>
int EvenAddition(int p[],int iSize)
{
     int iCnt=0;
     int Addition=0;
     int Count=0;
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
      if(p[iCnt]%2==0)
      {
       Addition=Addition+p[iCnt];
      }
     }
  return Addition;
}


int main()
{
  int iLength=0;
  int *ptr=NULL;
  int iCnt;
  int iResult=0;

  
  printf("Enter the number of elements::");
  scanf("%d",&iLength);
  
  ptr=(int *)malloc(iLength*sizeof(int));
 
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
     }
     
  iResult=EvenAddition(ptr,iLength);
  printf("Even No. Addition::%d",iResult);

 free(ptr);
    return 0;
}