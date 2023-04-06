// #include<iostream>
// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;
// int fact(int n){
//     int ans=1;
//     for(int i=1;i<=n;i++){
//         ans=ans*i;
//     }
//     return ans;
// }
// int main(){
// //     int ans=0;
// //     int p=0,q=0;
// //     int l,r;
// //     cin>>l>>r;
// //     int num=l;
    
// //     while(num>=l && num<=r){
// //         int val=0;
// //         int a=pow(2,p);
// //         int b=pow(5,q);
// //         if(num == (a*b)){
// //             ans++;
// //         }
// //         p++;
// //         q++;
// //         val=ans;
// //         cout<<val<<endl;
        
// //     }
// //      while(num>=l && num<=r){
// //         int a=pow(2,p);
// //         int b=pow(5,q);
// //         if(num == (a*b)){
// //             ans++;
// //         }
       
// //         q++;
// //         int val=ans;
// //         cout<<val<<endl;
        
// //     }
// //      while(num>=l && num<=r){
// //         int a=pow(2,p);
// //         int b=pow(5,q);
// //         if(num == (a*b)){
// //             ans++;
// //         }
// //         p++;
// //         int val=ans;
// //         cout<<val<<endl;
       
        
// //     }
   
// //     cout<<endl;
    
// // }
// // int a,b;
// // cin>>a>>b;
// // int r1=a/3;
// // int r2=b/3;


// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    int ans1 = 0;
    int ans2 = 0;
    int j = 0;
    int k = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s1[i] == '1')
        {
            ans1 = ans1+ pow(2, j);
            j++;
        }
        else
        {
            j++;
        }
    }
   
   

    for (int i = m - 1; i >= 0; i--)
    {
        if (s2[i] == '1')
        {
            ans2 += pow(2, k);
            k++;
        }
        else
        {
            k++;
        }
    }



    int ans=ans1+ans2;
    string s;


    while(ans!=0){
        int rem=ans%2;
        char ch='0' + char(rem);
        s.push_back(ch);
        ans=ans/2;
    }
    cout<<s<<endl;

    cout<<"after the reversing"<<endl;

    reverse(s.begin(),s.end());

    cout<<s<<endl;
    

    cout << endl;

}
