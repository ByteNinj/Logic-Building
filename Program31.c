#include<stdio.h>
void displayFactor(int iNo)
{ 
    int iCnt=0;
    printf("Factors of %d is \n",iNo);
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
        printf("%d\t",iCnt);
        }
    }

}
int main()
{ 
    int iValue=0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    displayFactor(iValue);

   return 0;
}

//O(N/2)