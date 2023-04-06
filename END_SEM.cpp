// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	map<string,int> m;
// 	for(int i=0;i<n;i++){
// 		string s;
// 		cin>>s;
// 		m[s]++;
// 	}
// 	int ct=0;
// 	for(auto it : m){
// 		if(it.second == 2){
// 			ct++;
// 		}
// 	}
// 	cout<<ct<<endl;
	
// 	return 0;
// }
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,m,k,x;
// 	    cin>>n>>m>>k>>x;
// 	    vector<int> v;
// 	    while(1){
// 	        int ct=0;
// 	        while(ct != (k-1) ){
// 	            v.push_back(n);
// 	            ct++;
// 	        }
// 	        int sum1=0;
	        
// 	        for(int i=0;i<v.size();i++){
// 	            sum1+=v[i];
// 	        }
// 	        if(sum1 < x){
// 	        v.push_back(n+m);
// 	        int sum2=0;
// 	        for(int i=0;i<v.size();i++){
// 	            sum2+=v[i];
// 	        }
// 	        if(sum2<x){
// 	            continue;
// 	        }
// 	        else{
// 	            cout<<"yes"<<endl;
// 	            break;
// 	        }
// 	        }
// 	        else{
// 	            cout<<"no"<<endl;
// 				break;
// 	        }
// 	    }
	    
// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){
		int n,m,k,x;
		cin>>n>>m>>k>>x;
		if(x%((n*k)+m) == 0){
			cout<<"yes"<<endl;
		}
		else if(x%((n*k)+m) - (n*(k-1)) > 0){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;

}








