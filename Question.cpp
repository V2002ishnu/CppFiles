#include<iostream>
#include<algorithm>
#include<map>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    // int arr[n];
    map<int, int> m;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    
    }
    int ans=INT_MIN;
    for(auto pr : m){
        
        if( pr.second > ans){
            ans=pr.second;
        }
        
    }
    cout<<n-ans<<endl;
    
    cout<<endl;
    }
    return 0;
}