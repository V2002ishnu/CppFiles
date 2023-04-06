#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n,m;
    // cin>>n>>m;
    int arr[3][3];
    set<int> set;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int s=0 ,e=0;
    int sum=0;
    while(s<3){
        
        while(e<3){
        sum+=arr[s][e];
        e++;
    }
    s++;
    e=0;
    
    cout<<sum<<endl;
    set.insert(sum);
    sum=0;
}
cout<<*set.end() - 1<<endl;
  // cout<<sum<<endl;
    
    return 0;
}