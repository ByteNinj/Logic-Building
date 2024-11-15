#include<stdio.h>
#include<stdlib.h>
int Display(int p[],int iSize)
{
     int iCnt=0;
     int Addition=0;
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
      Addition=Addition+p[iCnt];
     }
  return Addition;
}


int main()
{
  int iLength=0;
  int *ptr=NULL;
  int iCnt;
  int iResult=0;

  //Step 1:Accept the number of elements from user
  printf("Enter the number of elements::");
  scanf("%d",&iLength);
  //Step2:Allocates the memory dynamically 
  ptr=(int *)malloc(iLength*sizeof(int));
  //Accept the value and store in heap(Dynamic memory)
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
     }
     
   iResult=Display(ptr,iLength);
  printf("Addition of Entered Numbers is::%d",iResult);

 free(ptr);
    return 0;
}