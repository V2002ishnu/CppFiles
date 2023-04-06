#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int *arr, int s,int e, int key)
{
    // base case
    if(s>e){
        return 0;
    }
    int mid=s+(e-s)/2;

    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid] > key){
        // R.R
       return BinarySearch(arr,s,mid-1,key);
    }

    if(arr[mid] < key){
        // R.R
       return  BinarySearch(arr,mid+1,e,key);
    }
    
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;

    cout<<BinarySearch(arr,s,e,key)<<endl;

    return 0;
}