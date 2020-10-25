#include<bits/stdc++.h>
using namespace std;

int main()
{
	int first,second;
	cout<<"enter the first number :: ";
	cin>>first;
	cout<<"\nenter the second number :: ";
	cin>>second;
	cout<<"\n\nnumber before swapping :: \n";
	cout<<"first number :: "<<first<<"\t"<<"second number :: "<<second<<"\n";
	swap(first,second);
	cout<<"\nnumber after swapping :: \n";
	cout<<"first number :: "<<first<<"\t"<<"second number :: "<<second<<"\n";

	return 0;
}
