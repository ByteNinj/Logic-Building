#include<stdio.h>
void display(int ino)
{
    int  icnt=0;
  for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%d\n",icnt);
        
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