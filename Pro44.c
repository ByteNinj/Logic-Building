#include<stdio.h>
void DisplayN(int ptr[],int iSize)
 { 
    int iCnt=0;
    printf("Array elements are:::\t");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {

     printf("%d\t",ptr[iCnt]);//*(ptr+0(sizeof(int)))=ptr[0]={*ptr  ptr++}
                              //*(ptr+1(sizeof(int)))
                              //*(ptr+2(sizeof(int)))
                              //*(ptr+3(sizeof(int)))
                              //*(ptr+4(sizeof(int)))
                              //*(ptr+5(sizeof(int)))
    }
    
}


int main()
{
    int N;
   
    int iCnt=0;
    
    
    printf("Enter Array Elements::\n");
    int Array[6];

    for(iCnt=0;iCnt<6;iCnt++)
    {
        scanf("%d",&Array[iCnt]);
    }

    DisplayN(Array,6);
    
    return 0;
}