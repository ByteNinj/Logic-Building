#include<stdio.h>
#include<stdlib.h>
float MaximunNo(int p[],int iSize)
{
     int iCnt=0;
     int Max=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
     {
       if(p[iCnt]>Max)
       {
           Max=p[iCnt];
       }
     }
    
  return Max;
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
  printf("Maximun Number is::%d``````````~~~~~~~~~~~~~~~~```                                                                                                                                                                   0..0..       ",iResult);

 free(ptr);
    return 0;
}