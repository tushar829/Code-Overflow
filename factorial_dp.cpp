#include<bits/stdc++.h>
using namspace std;
vector<long long int>arr;
int main()
{
long long int val; //upto which term
cin>>val;
arr.push_back(1);

for(long long int i=1;i<val;i++;)
{
arr.push_back(arr[i-1]*i);
}

  cout<<" "<<arr[val-1]<<" ,";
cout<<endl;


return 0;
}
