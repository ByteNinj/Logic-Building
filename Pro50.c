#include<stdio.h>
#include<stdlib.h>
int EvenDisplay(int p[],int iSize)
{
     int iCnt=0;
     int Addition=0;
     int Count=0;
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
      if(p[iCnt]%2==0)
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
     
  iResult=EvenDisplay(ptr,iLength);
  printf("Number of Even elements Are::%d",iResult);

 free(ptr);
    return 0;
}