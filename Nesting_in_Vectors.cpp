#include<iostream>
//#include<vector>
#include<bits/stdc++.h>
using namespace std;
//void print_vector(vector<pair<int,int> > v){
//	for(int i=0;i<v.size();i++){
//		cout<<v[i].first<<" "<<v[i].second<<endl;
//		
//	}
//	cout<<endl;
//}
//int main()
//{
//	vector<pair<int,int> > v;
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		int x,y;
//		cin>>x>>y;
//		v.push_back({x,y});
//	}
//	print_vector(v);
//}
void print_vector(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		v.push_back(3);
	}
	
	cout<<endl;
}
void reverseArray(vector<int> &arr , int m){
	int s=0;
	int e=m-1;
	while(s<=m){
		swap(arr[s],arr[m]);
		s++;
		e--;
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	reverseArray(v, n);
	print_vector(v);
}















