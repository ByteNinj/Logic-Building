#include<stdio.h>
#include<stdlib.h>
int  FrequencyCount(int p[],int iSize,int NoToSearch)
{
     int iCnt=0;
     int EAddition=0;
     int OAddition=0;
     int Count=0;
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
      if(p[iCnt]==NoToSearch)
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
  int iCnt=0;
  int Result=0;
  int iValue=0;
  
  printf("Enter the number of elements::");
  scanf("%d",&iLength);
  
  ptr=(int *)malloc(iLength*sizeof(int));
 
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
     }
     
 printf("Enter the Number Which you want to search:");
 scanf("%d",&iValue);
  Result=FrequencyCount(ptr,iLength,iValue);
 printf("Frequency of %d is %d",iValue,Result);

 free(ptr);
    return 0;
}