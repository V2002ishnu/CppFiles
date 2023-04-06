#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // map<char, int> m;
    // string s;
    // cin>>s;
    // for(int i=0;i<s.length();i++){
    //     m[s[i]]++;
    // }
    // int ans=INT_MIN;
    // for(auto &pr: m){
    //     if(pr.second > ans){
    //         ans=pr.second;
    //     }
    // }
    // for(auto &pr: m){
    // if(ans==pr.second){
    //     cout<<pr.first<<" "<<endl;
    // }
    // }
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1' && s[i+1]=='0'){
				count++;
			}
		}
		cout<<count<<endl;
    
}
return 0;
}




