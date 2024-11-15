#include<stdio.h>
#include<stdlib.h>
float Display(int p[],int iSize)
{
     int iCnt=0;
     int Addition=0;
     
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
      Addition=Addition+p[iCnt];
      
     }
    
  return ((float)Addition/(int)iSize);
}


int main()
{
  int iLength=0;
  int *ptr=NULL;
  int iCnt;
  float iResult=0;

  printf("Enter the number of elements::");
  scanf("%d",&iLength);
  
  ptr=(int *)malloc(iLength*sizeof(int));
 
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
     }
     
   iResult=Display(ptr,iLength);
  printf("Average of Entered Numbers is::%f",iResult);

 free(ptr);
    return 0;
}