#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printvector(vector<int> &arr){
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
}
vector<int> rotateArray(vector<int> &arr, int n, int k){
	vector<int> temp(n);
	for(int i=0;i<arr.size();i++){
		temp[(i+k) % arr.size()]=arr[i];
	}
	arr=temp;
	return temp;
}
int main(){

	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    


	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	rotateArray(v,5,2);
	printvector(v);
	return 0;
	
}
