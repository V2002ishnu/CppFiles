#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		v.push_back(3);
	}
	
	cout<<endl;
}
int main()
{
	vector<int> v;
//	cout<<"size of vector :"<<v.size()<<endl;
//	cout<<"capacity of vector :"<<v.capacity()<<endl;
	int n;
	cin>>n;
	for(int i=0;i<n;i++ )
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	v.pop_back();
	print_vector(v);
	print_vector(v);
	cout<<"lets make the Pairs :->"<<endl;
	pair<int, string> p;
	p=make_pair(2,"abc");
	pair<int, string> &p2=p;
	p2.first=3;
	cout<<p.first<<" "<<p.second<<endl;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	cout<<"size of vector :"<<v.size()<<endl;
//	cout<<"capacity of vector :"<<v.capacity()<<endl;
}


























