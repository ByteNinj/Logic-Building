class Program5
{
    public static void main(String arr[])
    {
        int res=0;
        Arithmatic obj=new Arithmatic();
        Arithmatic obj1=new Arithmatic(11,12);

        res=obj1.Addition();
        System.out.println("Addition is:"+res);

        res=obj1.Substraction();
        System.out.println("Substraction is:"+res);




    }

}

class Arithmatic
{
    public int No1;
    public int No2;
    public Arithmatic()
    {
        this.No1=0;
        this.No2=0;
    }

    public Arithmatic(int A,int B)
    {
        this.No1=A;
        this.No2=B;
    }

    int Addition()
    {
        int ans=0;
         ans=this.No1+this.No2;
        return ans;
    }
    
    int Substraction()
    {
        int ans=0;
         ans=this.No1-this.No2;
        return ans;
    }
    
}




