class fibonacci 
{
  public static void main(String[] args)
  {
    scanner sc= new Scanner (System.in);
    int n = sc.nextInt();
   
    int a=0;
    int b=1;
    system.out.print(a+" ");
    system.out.print(b+" ");
    
    for(int i=0;i<n-2;i++)
    {
       int c=a+b;
       system.out.print(c);
       a=b;
       b=c;
    }
  } 
}   
