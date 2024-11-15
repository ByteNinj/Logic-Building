#include<stdio.h>
 int DisplayN(int Number)
 { 
    int iCnt=0;
    int Array[Number];
    printf("Enter Array Elements::\n");
    for(iCnt=0;iCnt<Number;iCnt++)
    {
        scanf("%d",&Array[iCnt]);
    }
      printf("Display Array Elements::\n");

     for(iCnt=0;iCnt<Number;iCnt++)
    {
        printf("%d\t",Array[iCnt]);
    }

    return 0;
 }


int main()
{
    int N;
    printf("Enter the N value:\n");
    scanf("%d",&N);
    DisplayN(N);
    return 0;
}