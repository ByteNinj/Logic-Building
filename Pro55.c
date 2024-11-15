#include<stdio.h>
#include<stdlib.h>
void EvenAddition(int p[],int iSize)
{
     int iCnt=0;
     int EAddition=0;
     int OAddition=0;
     int Count=0;
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
      if(p[iCnt]%2==0)
      {
       EAddition=EAddition+p[iCnt];
      }
      else
      {
        OAddition=OAddition+p[iCnt];
      }
     }
 printf("\n%d\n",EAddition);
  printf("%d\n",OAddition);
}


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
     
  EvenAddition(ptr,iLength);


 free(ptr);
    return 0;
}