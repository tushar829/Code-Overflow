#include <iostream>
#include <algorithm>

using namespace std;



int binarySearch(int arr[],int low,int high,int x){
    int mid;
    while(low<=high){

        mid=(low+high)/2;

        if(arr[mid]==x ){


            return mid;
        }
        else if(arr[mid]>x){
            high=mid-1;

        }
        else{

            low=mid+1;
        }

    }

return -1;

}


int main(){

int arr[]={1,0,5,2,9,3};

sort(arr,arr+6);

int index=binarySearch(arr,0,6,3);
cout<<index;

}
