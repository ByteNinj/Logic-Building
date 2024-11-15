#include<stdio.h>
void display(float Marks)
{
   if(Marks>100.0f || Marks<0.0f)            //filter
    {
      printf("Invalid Pecentage:Please Enter the Range from 0 to 100 ");
      return;                 //without return it execute afterwards code
    }

  if(Marks>=40.00f)
    {
      printf("You are Pass\n");
    }
   else
   {
    printf("You are Failed\n");
   }


}

int main()
{
   float fValue=0.0f;
   printf("Enter Your marks\n");
  scanf("%f",&fValue);
   display(fValue);
 

    return 0;
}