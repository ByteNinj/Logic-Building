#include<stdio.h>
void DisplayN(int ptr[])
 { 
    int iCnt=0;
    int Ans=0;
    
     printf("%d\t",ptr[0]);  //  *(ptr+0)
    
    printf("%d\t",ptr[1]);
    
    printf("%d\t",ptr[2]);
     
    printf("%d\t",ptr[3]);

    

    
 
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