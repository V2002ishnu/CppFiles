// // #include <iostream>
// // #include<bits/stdc++.h>
// // using namespace std;

// // bool f(vector<int>&v)
// // {
// //    if(v.size()==1){
// //    return false;
// //    }
// //    int ct=0;
// //    int n=v.size();
// //    int a=v[0];
// //    int b=v[n-1];

// // for(int i=1;i<=n-1;i++){
// //     if(v[i] != a+i){
// //         return 0;
// //     }
// // }
// // return 1;

// // }

// // int main()
// // {
// //     int t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         int n;
// //         cin>>n;
// //         vector<int> v;
// //         while(n>0)
// //         {
// //             int digit=n%10;
// //             v.push_back(digit);
// //             n=n/10;
// //         }

// //         sort(v.begin(),v.end());
// //         if(f(v)){
// //         cout<<"YES"<<endl;
// //         cout<<v[0]<<" "<<v[v.size()-1]<<endl;
// //         }
        
// //         else
// //         cout<<"NO"<<endl;
// //     }
    
// // }


// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//    int t;
//    cin>>t;
//    while(t--){
//     int x;
//     cin>>x;
//     vector<int> v(10,0);
//     while(x!=0){
//         v[x%10]++;
//         x/=10;
//     }
//     int min=10;
//     int max=-1;
//     int fl=1;
//     int y=0,c=0;
//     for(int i=0;i<=9;i++){
//        if(v[i]){
//         min=i;
//         fl=0;
//        }
//        if(!fl && !v[i])
//        {
//             y=1;
//             c++;
//        }
//     }
//     for(int i=9;i>=0;i--)
//     {
//         if(v[i])
//         {
//             max=i;
//         }
//     }
//     if(max-min+1!=c)
//     cout<<"NO\n";
//     // vector<int>vec(10,0);
//     // for (auto it:mp)
//     // {
//     //     vec[it.first]=1;
//     // }
//     // int alpha = 1;
//     // for (int i = min ;i <=max ; i++)
//     // {
//     //     if(vec[i]!=1) {alpha=0;
//     //     break;}
//     // }
//     // if(alpha==0) cout<<"NO"<<endl;
//     // else if(max==min) cout<<"NO"<<endl;
//     else{
//         cout<<"YES"<<endl;
//         cout<<min<<" "<<max<<endl;
//     }
//    }
// }


#include<bits/stdc++.h>
using namespace std;
void solve(int arr[], int n){

        for(int i=1;i<=n;i++){
            if(arr[i-1]<=i){
                cout<<"yes"<<endl;
                return;
            }

        }
        cout<<"no"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        solve(arr,n);
        
    }
}
