#include<bits/stdc++.h>
using namespace std;
// int Fib(int n){
//     // base Case
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     // R.R.
//     return Fib(n-1) + Fib(n-2);
// }
int Vectorsum(vector<int> v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}
int Arraysum(int arr[] , int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=0;
        sum=Arraysum(arr,n);
        v.push_back(sum);
        for(int i=n-1;i>1;i--){
            sum=sum-arr[i];
            v.push_back(sum);
        }
    int ans=Vectorsum(v);
    cout<<ans<<endl;
 }
    
    return 0;

}