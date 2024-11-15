#include<stdio.h>
void DisplayN(int *ptr,int iSize)
 { 
    int iCnt=0;
    printf("Array elements are:::\t");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {

     printf("%d\t",*ptr);
     ptr++;
    }
    
}


int main()
{
    int N;
   
    int iCnt=0;
    
    
    printf("Enter Array Elements::\n");
    int Array[4];

    for(iCnt=0;iCnt<4;iCnt++)
    {
        scanf("%d",&Array[iCnt]);
    }

    DisplayN(Array,4);
    
    return 0;
}