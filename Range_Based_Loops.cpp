#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int> v={1,2,3,4,5};
	// int n;
	// cin>>n;
	// for(int i=0;i<n;i++){
	// 	int x;
	// 	cin>>x;
	// 	v.push_back(x);
	// }
	printVector(v);
	for(auto value : v){
		cout << value<<" ";
	}
	cout<<endl;
	vector<pair<int, int> > v_p={{1,2},{2,3}};
	for(auto &value : v_p){
		cout<<value.first<<value.second<<" ";
	}
	cout<<endl;
	auto a=1;
	cout<<sizeof(a)<<endl;
}



























