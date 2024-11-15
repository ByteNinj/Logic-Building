#include<stdio.h>
#include<stdlib.h>
int  FrequencyCount(int p[],int iSize)
{
     int iCnt=0;
     int EAddition=0;
     int OAddition=0;
     int Count=0;
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
      if(p[iCnt]==10)
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
  int Result=0;

  
  printf("Enter the number of elements::");
  scanf("%d",&iLength);
  
  ptr=(int *)malloc(iLength*sizeof(int));
 
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
     }
     
  Result=FrequencyCount(ptr,iLength);
 printf("Frequency of 10 is:%d",Result);

 free(ptr);
    return 0;
}