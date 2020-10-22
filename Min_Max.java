import java.util.*;
import java.io.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
  MyScanner s = new MyScanner();
  PrintWriter out=new PrintWriter(System.out);
  int n=s.nextInt();
  long arr1[]=new long[n];
  for(int i=0;i<n;i++){
      arr1[i]=s.nextInt();
  }
  long max=0,min=0;
  long sum1=0;
  for(int i=0;i<n;i++){
      sum1=sum1+arr1[i];
  }
  long result=0;
  min=sum1;
  for(int i=0;i<n;i++){
      result=sum1-arr1[i];
      max=(long)Math.max(result,max);
      min=(long)Math.min(result,min);
  }
  out.println(min+" "+max);
  out.flush();
    }
    static class MyScanner{
      private BufferedReader br;
      private StringTokenizer tr;
      public MyScanner(){
          br=new BufferedReader(new InputStreamReader(System.in));
      }
      public String next(){
          try{
              while(tr==null||!tr.hasMoreTokens()){
                  tr=new StringTokenizer(br.readLine());
              }
          }
          catch(Exception e){
              e.printStackTrace();
          }
          return tr.nextToken();
      }
      public int nextInt(){
          return Integer.parseInt(next());
      }
      public long nextLong(){
          return Long.parseLong(next());
      }
    }
}
