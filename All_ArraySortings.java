public class sort
{

static int A[]={10,40,30,99,1,24,12,0};
static int B[]={10,40,30,99,1,24,12,0};
static int D[]={10,40,30,99,1,24,12,0,10000};
static int E[]={10,40,30,99,1,24,12,0};

static int low=0;
static int high=B.length-1;
static int high2=D.length-2;

public void print(int arra[])
{
	int x=arra.length;
		for(int a=0;a<x;a++)
		{
			System.out.print(arra[a]+" ");
		}

}

public void print2(int arra[],int limit)
{
	int x=arra.length;
		for(int a=0;a<=limit;a++)
		{
			System.out.print(arra[a]+" ");
		}

}

public void bubbleSort(int arra[])
{
	int temp;
	int x=arra.length;
	for(int a=0;a<x;a++)
	{
		for(int b=0;b<x-1;b++)
		{
			if(arra[b]>arra[b+1])
			{
				temp=arra[b];
				arra[b]=arra[b+1];
				arra[b+1]=temp;
			}
		}
	}
	
}

public void mergeSort(int l,int h)
{
	if(l<h)
	{
			int mid=(l+h)/2;
			mergeSort(l,mid);
			mergeSort(mid+1,h);
			merge(l,mid,h);
	}
}


public void merge(int low,int mid,int high)
{
	int t=low;
	int i=low;
	int j=mid+1;
	int k;
	int c[]=new int[B.length];
	while((i<=mid)&& (j<=high))
	{
		if(B[i] <=B[j])
		{
			c[t]=B[i];
			i++;
		}
		else
		{
			c[t]=B[j];
			j++;
		}
		t++;
	}
	
	if(j<=high)
	{
		for(k=j;k<=high;k++)
		{
			c[t]=B[k];
			t++;
		}
	}
	else
	{
			for(k=i;k<=mid;k++)
			{
				c[t]=B[k];
				t++;
			}
	}
	
	
	for(k=low;k<= high;k++)
	{
		B[k]=c[k];
	}

}

public void quickSort(int p,int q)
{
	int j;
	if(p<q)
	{
		j=partition(p,q);
		quickSort(p,j-1);
		quickSort(j+1,q);
	}
	
}

public int partition(int p,int q)
{
	int i=p;
	int j=q+1;
	int pivot=D[p];
	
	do{
		do{i=i+1;}while(D[i]<pivot);
		do{j=j-1;}while(D[j]>pivot);
		if(i<j)
		{
			int temp=D[i];
			D[i]=D[j];
			D[j]=temp;
			
			//swap(D,D[i],D[j]);
		}
	}while(i<j);
		//swap(D,D[p],D[j]);
		int temp=D[p];
			D[p]=D[j];
			D[j]=temp;
	return j;
	
}

 
public void insertionSort(int n)
{
int key,j,i;


	for(i=1;i<n+1;i++)
	{
		key=E[i];
		j=i-1;
			while((j>=0 )&& (E[j]>key))
		{
			E[j+1]=E[j];
			j=j-1;
		}
		E[j+1]=key;
	}
}

public int binarySearch(int array[],int key)
	{
		
		
		while(low <= high)
		{
			
			int mid=(low+high)/2;
			if(array[mid]==key)
				{
					
					return mid;
					
					
					
				}
			
			if(array[mid] >key)
				{
					low=mid+1;
				}
			else
				{
					high=mid-1;
				}
			
		}
		return -1;
		
			
	}
	






















public static void main(String args[])
{
	sort s=new sort();
	

		//s.print(A);
		//s.bubbleSort(A); 
		//System.out.println(" ");
		//s.print(A);
		
		//s.print(B);
		//System.out.println(" ");
		//s.mergeSort(low,high);
		//s.print(B);
		
		//s.print(D);
		//System.out.println(" ");
		//s.quickSort(low,high2);
		//s.print2(D,high2);
		
		s.print(E);
		System.out.println(" ");
		s.insertionSort(high);
		s.print(E);
		System.out.println(" ");
		int p=s.binarySearch(E,10);
		System.out.println(p);
}





}
