#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"enter number of rows :: ";
	int r;
	cin>>r;
	cout<<"enter number of columns :: ";
	int c;
	cin>>c;

	int m[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>m[i][j];
		}
	}

	cout<<"entered 2D matrix :: \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
