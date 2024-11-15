
#include<stdio.h>
float CircleArea(float radius)
{
     float fArea=0.0f;
      fArea=3.14f*radius*radius;
      return fArea;
}


int main()
{
  float fRadius=0.0f;
  float ans=0.0f;
 
  printf("Enter the Radius::");
  scanf("%f",&fRadius);
   
  ans=CircleArea(fRadius);   
 printf("Area of circle is::%f\n",ans);
   

  return 0;  
}