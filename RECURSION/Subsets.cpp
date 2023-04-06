#include<bits/stdc++.h>
using namespace std;
void Solve(vector<vector<int> >& ans, vector<int>& output, int i, int *arr, int n){
    // base case
    if(i>=n){
        ans.push_back(output);
        return ;
    }

    // EXCLUSIVE
    Solve(ans,output,i+1,arr,n);

    // INCLUSIVE
    output.push_back(arr[i]);
    Solve(ans,output,i+1,arr,n);

}
int main(){
    vector<int> output;
    vector<vector<int> > ans;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    Solve(ans,output,i,arr,n);
    
    return 0;
}


// Phone Keypad Problem
