#include<stdio.h>
 int DisplayN(int *ptr)
 { 
    int iCnt=0;
    int Ans=0;
    
     printf("%d",*ptr);
     ptr++;
    printf("%d",*ptr);
     ptr++;
    printf("%d",*ptr);
     ptr++;
    printf("%d",*ptr);

    

    
 return 0;
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

    DisplayN(Array);
    
    return 0;
}