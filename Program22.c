#include<stdio.h>
void display(int ino)
{
     int i=0;
  for(i=1;i<=ino;i++)
   {
      printf("Jay Ganesh:%d\n",i);
   }
}


int main()
{  
   
   int ifreq=0;
    printf("Enter the frequency:");
    scanf("%d",&ifreq);
    display(ifreq);
   

    return 0;
}