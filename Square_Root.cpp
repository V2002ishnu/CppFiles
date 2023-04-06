#include<iostream>
using namespace std;
 int sqrtint(int n){
	int s=0;
	int e=n;
	int ans=-1;
	while(s<=n){
		long long int mid=s+(e-s)/2;
		if(mid*mid == n){
			return mid;
		}
		else if(mid*mid > n){
			e=mid-1;
		}
		else if(mid*mid < n){
			ans=mid;
			s=mid+1;
		}
	
	}
	return ans;
}
double precise(int n, int precisecount, int tempsol)
{
	double factor=1;
	double ans=tempsol;
	
	for(int i=0;i<precisecount;i++){
		factor=factor/10;
		for(double j=ans;j*j<n;j=j+factor){
			ans=j;
		}
	}
	return ans;
}
int main()
{
	int num;
	cin>>num;
	int tempsol=sqrtint(num);
	cout<<precise(num, 3, tempsol)<<endl;
	return 0;
}




































