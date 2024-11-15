#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool ChkWhether(int p[],int iSize,int NoToSearch)
{
     int iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
     {
           if(p[iCnt]==NoToSearch)
          {
            break;
          }
     }

  if(iCnt==iSize)
   {
    return false;
   }
   else
   {
    return true;
   }

}

int main()
{
  int iLength=0;
  int *ptr=NULL;
  int iCnt=0;
  bool Result=false;
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
  Result=ChkWhether(ptr,iLength,iValue);
 if(Result==true)
 {
    printf("Element is present");
 }
 else
 {
    printf("Element is not present");
 }

  free(ptr);

    return 0;
}