#include<stdio.h>
#include<stdlib.h>
int EvenDisplay(int p[],int iSize)
{
     int iCnt=0;
     int Addition=0;
     
     printf("Even Elements from the array are::");
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
      if(p[iCnt]%2==0)
      {
        printf("%d\t",p[iCnt]);
      }
     }
  return 0;
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
     
   EvenDisplay(ptr,iLength);
  

 free(ptr);
    return 0;
}