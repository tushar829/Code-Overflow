import java.util.*;
public class stacch
{
	int top=-1;
	char array []=new char[8];
	
	
	public void push(char inum)
	{
		top=top+1;
		array[top]=inum;
	}
	
	public char pop()
	{
		char pop=array[top];
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