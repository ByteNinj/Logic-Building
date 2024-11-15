#include<stdio.h>
#include<stdlib.h>
int main()
{
  int iLength=0;
  int *ptr=NULL;
  int iCnt;
  printf("Enter the number of elements::");
  scanf("%d",&iLength);
  ptr=(int *)malloc(iLength*sizeof(int));
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
     }
      printf("Elements are:::");
     for(iCnt=0;iCnt<iLength;iCnt++)
     {
       printf("%d\t",ptr[iCnt]);
     }

 free(ptr);
    return 0;
}