#include<stdio.h>
void DisplayTimeTable(int std)
{

   if(std==8)
   {
     printf("Your Exam is at 9.30 AM\n");
   }
    
    else if(std==9)
   {
     printf("Your Exam is at 10.30 AM\n");
   }
  
  else if(std==10)
   {
     printf("Your Exam is at 11.30 AM\n");
   }
   else 
   {
    
    printf("Sorry we dont have any infomation about your standard");

   }
}

int main()
{
   int iValue=0;
   printf("Enter your standard:\n");
   scanf("%d",&iValue);
   DisplayTimeTable(iValue);

    return 0;
}