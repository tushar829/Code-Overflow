#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


int  partition(int array[],int left,int right){

	int pivot=array[left];
	
	int i=left+1;

	for(int j=left+1;i<=right;j++){ 

		if(array[j]<pivot){

			swap(array[i],array[j]);
			i++;
		}
	}

	swap(array[left],array[i-1]);
	
	int pos=i-1;

	return pos;

}

int quick(int array[],int left,int right){

	if(left<right){

		int pindex=partition(array,left,right);
		quick(array,left,pindex-1);
		quick(array,pindex+1,right);
	}

	return 0;

}



int main(){

  int size;
  int test;

  test=1;

  while(test--){

  cin>>size;


  int array[size];


	quick(array,0,size);
	

  for(int i=0 ;i<size;i++)

	{
		 cout<<array[i]<<" ";
		 					
	}


	}

	cout<<"hello";

return 0;

}
