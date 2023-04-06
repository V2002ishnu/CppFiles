// #include <iostream>

// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         string temp="";
//         int al=0;
//         int bob=n-1;
//         while(al<=bob){
//             if(s[al] == '0'){
//                 temp=s[al]+temp;
//             }
//             else{
//                 temp=temp+s[al];
//             }
//             if(al<bob){
//                 if (s[bob] == '0')
//                 {
//                     temp=temp+s[bob];
//                 }
//                 else{
//                     temp=s[bob]+temp;
//                 }
//                 bob--;
                
//             }
//             al++;
//         }
//         cout<<temp<<endl;
        
// }
// return 0;
// }
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
       
        int arr[n];
        int ct=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        cout<<"0"<<endl;
        else if(n==2 && arr[0]<arr[1])
        {
            cout<<"0"<<endl;
        }
        else{
    for(int i=0;i<n;i++)
    {

        for(int j=i+2;j<n;j++)
        {
            if(arr[i]>arr[j] && j<n )
            {
                swap(arr[i],arr[j]);
                ct++;
            }
            
        }
    }
    if(ct==0)
    cout<<"-1"<<endl;
    else
    cout<<ct<<endl;
    }
    }
}


