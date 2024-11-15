#include<stdio.h>
#include<stdlib.h>
int OddCount(int p[],int iSize)
{
     int iCnt=0;
     int Addition=0;
     int Count=0;
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
      if(p[iCnt]%2==1)
      {
        Count++;
      }
     }
  return Count;
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
     
  iResult=OddCount(ptr,iLength);
  printf("Number of odd elements Are::%d",iResult);

 free(ptr);
    return 0;
}