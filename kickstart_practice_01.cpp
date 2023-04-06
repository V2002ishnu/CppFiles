#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=1;j<=t;j++){
		int n,m;
		cin>>n>>m;
		int c[n];
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
		int sum=0;
		for(int i=0;i<n;i++){
			sum=sum+c[i];
		}
		int result;
		result=sum%m;
		cout<<"Case #"<<j<<":"<<" "<<result<<endl;
	}
	return 0;
}
