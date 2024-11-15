#include<stdio.h>

/*
Step 1: Understand the problem statement
Step 2:Write Algorithm
step 3:Decide the programming language
step 4:Write code
Step 5:Test the code
*/

/*
Step1:

*/
  





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



int main()
{  
    int no1=0,no2=0;

    printf("Enter two numbers:\n");
    scanf("%d%d",&no1,&no2);

   if(no1<0)
        {
         no1=-no1;
         }

   if(no2<0)
        {
         no2=-no2;
         }
  
    int res=0;

    res=addition(no1,no2);
    printf("Addition is:::%d\n",res);

    ;
     
    return 0;
}