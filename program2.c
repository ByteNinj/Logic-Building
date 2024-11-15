#include<stdio.h>
///////////////////////////////////////////////////////
// Function name : addition
// Description   : It is used to perform addition of 2 integers
// Input         : Integer , Integer
// Output        : Integer
// Author        : Archana Bansude
// Date          :06/10/2024
////////////////////////////////////////////////////////



int addition(int a,int b)
{
    int ans=0;
    ans=a+b;
    return ans;
}

int substraction(int a,int b)
{
    int ans=0;
    ans=a-b;
    return ans;
}


int main()
{    int no1=0,no2=0;

    printf("Enter two numbers:\n");
    scanf("%d%d",&no1,&no2);
    
    int res=0;

    res=addition(no1,no2);
    printf("Addition is:::%d\n",res);

     res=substraction(no1,no2);
    printf("Substraction is:::%d\n",res);

    return 0;
}