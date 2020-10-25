#include<iostream>
using namespace std;
int main()
{
int r1,c1,r2,c2;
cout<<"enter no of rows of 1st matrix\n";
cin>>r1;
cout<<"enter no of columns of 1st matrix (rows of 2nd matrix\n";
cin>>c1;
cout<<"enter no of rows of 2nd matrix\n";
cin>>r2;
cout<<"enter no of columns of 2nd matrix\n";
cin>>c2;
if(r2==c1)
{
int a[r1][c1],b[r2][c2],c[r1][c2];
cout<<"\nenter elements of 1st matrix\n";

for(int i=0;i<r1;i++)
{
  for(int j=0;j<c1;j++)
  {
  cin>>a[i][j];
  }
}
cout<<"\nenter elements of 2nd matrix\n";
for(int i=0;i<r2;i++)
{
  for(int j=0;j<c2;j++)
  {
  cin>>b[i][j];
  }
}
for(int i=0;i<r1;i++)
{
  for(int j=0;j<c1;j++)
  {
  c[i][j]=0;
        for(int k=0;k<c1;k++)
        {
        c[i][j]+=a[i][k]*b[k][j];
        }
        
  }
}
cout<<"\ninput matrix 1 is \n";
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
cout<<"\ninput matrix 2 is \n";
for(int i=0;i<r2;i++)
{
for(int j=0;j<c2;j++)
{
cout<<b[i][j]<<"\t";
}
cout<<"\n";
}
cout<<"\nresultant matrix is \n";
for(int i=0;i<r1;i++)
{
for(int j=0;j<c2;j++)
{
cout<<c[i][j]<<"\t";
}
cout<<"\n";
}
}
else
{
 cout<<"cannot multiply";
}
return 0;
}

