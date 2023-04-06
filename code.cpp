#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;

// bool prime(int n){
//     if(n==1)
//     return 0;
//     int count=0;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     if(count==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
//  int nprime(int l,int r)
//  {
   
//    int p=0;
//    for(int i=1;i<=l && l<=r;i++)
//    {
//      if(prime(i))
//      {
//          p++;
//      }
//      else{
//      continue;
//    }
//    return p;
//  }
//  }
// void SieveOfEratosthenes(int n)
// {
    
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
 
//     for (int p = 2; p * p <= n; p++) {
//         // If prime[p] is not changed, then it is a prime
//         if (prime[p] == true) {
//             // Update all multiples of p greater than or
//             // equal to the square of it numbers which are
//             // multiple of p and are less than p^2 are
//             // already been marked.
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
 
//     // Print all prime numbers
//     for (int p = 2; p <= n; p++)
//         if (prime[p])
//             cout << p << " ";
// }


// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int ct=0;
//        int l;
//        int r;
//        cin>>l>>r;
//        int ans=nprime(l,r);

//        //for(int i=l;i<=r;i++)
//        //{
//         // int ans=nprime(i);

//         if(ans%2==0 && ans!=0)
//         {
//             ct++;
//         }
//        //}
//        cout<<ct<<endl;
//     }
// }
// int decimal(int n){
    
// 	int i=0;
// 	int answer=0;
// 	while(n!=0){
// 		int digit=n%10;
// 		if(digit==1){
// 			answer=answer+pow(2,i);
// 		}
// 		n=n/10;
// 		i=i+1;
// 	}
// 	return answer;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     vector<int> v;
//     while(t--){
//         int x;
//         cin>>x;
//         int count=decimal(x);
//         cout<<count<<endl;
//         // int n;
//         // cin>>n;
//         // int y;
//         // for(int i=1;i<=n;i++){
//         // int z=x/i;
//         // int ans=(pow(2,z));

        
//         }

//     }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>> arr[i];
    }


    int a=0;
    int b=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            a++;
        }
    if(arr[i] == 1){
            b++;
        }

         if(arr[i] == 2){
            c++;
        } 
    }
    cout<<a<<b<<c<<endl;
      for(int i=0;i<a;i++){
       arr[i]=0;
    }

     for(int i=a;i<n-c;i++){
        arr[i]=1;
    }

     for(int i=n-c;i<n;i++){
       arr[i]=2;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}