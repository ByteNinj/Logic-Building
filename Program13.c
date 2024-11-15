
#include<stdio.h>


float CalculatePer(int Obtained,int Total)
{
   float ans=0.0f;
   ans=((float)Obtained/(float)Total)*100;
   return ans;
}





int main()
{
  float fPercentage=0.0f;
  int iValue1,iValue2;
 
  printf("Enter obtained marks:");
  scanf("%d",&iValue1);

  printf("Enter Total marks:");
  scanf("%d",&iValue2);

   fPercentage=CalculatePer(iValue1,iValue2);
    printf("Result is :::%f\n",fPercentage);
  

  return 0;  
}