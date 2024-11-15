#include<stdio.h>
 int DisplayN(int Number)
 { 
    int iCnt=0;
    int Array[Number];
     int Ans=0;
    printf("Enter Array Elements::\n");
    for(iCnt=0;iCnt<Number;iCnt++)
    {
        scanf("%d",&Array[iCnt]);
    }
      //printf("Display Array Elements::\n");
      
     
     for(iCnt=0;iCnt<Number;iCnt++)
    {
        Ans=Ans+Array[iCnt];
    }

    
 return Ans;
 }


int main()
{
    int N;
    int Addition=0;
    printf("Enter the N value:\n");
    scanf("%d",&N);
    Addition=DisplayN(N);
    printf("Addition is:::%d",Addition);
    return 0;
}