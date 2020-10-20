import java.util.*;
public class ex2e
{
	public static void main(String args[])
	{
		System.out.println();
		Scanner inp = new Scanner(System.in);
		stacch ex=new stacch();
		
		System.out.print("Input Your decimal number : ");
		int a=inp.nextInt();
		System.out.println();
		int b;
		
		while(0<a)
		{
			b=a%16;
			char m= (char)(b+'0');
			if(b==10)
				ex.push('A');
			else if (b==11)
				ex.push('B');
			else if (b==12)
				ex.push('c');
			else if (b==13)
				ex.push('D');
			else if (b==14)
				ex.push('E');
			else if (b==15)
				ex.push('F');
			else
				ex.push(m);
			a=a/16;
		}
		
		
		while(!ex.empty())
		{
			System.out.print(ex.pop()+" ");
		}
	}
}