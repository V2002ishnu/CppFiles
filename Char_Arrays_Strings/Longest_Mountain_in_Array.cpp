#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i=1;i<n;i++){
        if( (arr[i+1] > arr[i]) ||(arr[i-1] < arr[i]) ){
            v.push_back(arr[i]);
        }
    }
    print(v);
}