import java.util.*;
public class stac
{
	int top=-1;
	int array []=new int[8];
	
	
	public void push(int inum)
	{
		top=top+1;
		array[top]=inum;
	}
	
	public int pop()
	{
		int pop=array[top];
		top=top-1;
		return pop;
	}
	
	public boolean empty()
	{
		return(top==-1);
	}
	
	public boolean full()
	{
		return(top==7);
	}
}