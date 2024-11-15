#include<iostream>
using namespace std;
class Arithmatic
{
    public:
    int no1,no2;

    Arithmatic()
    {
       this->no1=0;
       this->no2=0;
    }

    Arithmatic(int a,int b)
    {
       this->no1=a;
        this->no2=b;
   }
   int addition()
   {
    int ans=0;
    ans=this->no1+this->no2;
    return ans;

   }

    int substraction()
   {
    int ans=0;
    ans=no1-no2;
    return ans;

   }

};



int main()
{
    int no1,no2,res=0;
    cout<<"Enter two numbers::\n";
    cin>>no1>>no2;
      Arithmatic obj();
      Arithmatic obj1(no1,no2);

     res=obj1.addition();
     cout<<"Addition is :"<<res;


    return 0;
}

