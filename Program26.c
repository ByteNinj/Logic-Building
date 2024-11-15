#include<stdio.h>
void display(int ino)
{
    int  icnt=1;
  while(icnt<=ino)
    {
        printf("%d\n",icnt);
         icnt++;
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