#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
//int binarysearch(int arr[], int n, int key){
//	int s=0;
//	int e=n-1;
//	while(s<=e){
//		int mid=s+(e-s)/2;
//		if(arr[mid]<key){
//			s=mid+1;
//		}
//		else if(arr[mid]>key){
//			e=mid-1;
//		}
//		else{
//			return mid;
//		}
//	}	
//}
bool ispossible(int arr[], int n, int m, int mid){
	int studentcount=1;
	int pagesum=0;
	for(int i=0;i<n;i++){
		if(pagesum + arr[i] <= mid){
			pagesum+=arr[i];
		}
		else{
			studentcount++;
			if(arr[i] >mid || studentcount > m){
				return false;
			}
			pagesum=arr[i];
		}
	}
	return true;
}
int allocate(int arr[], int n, int m){
	int s=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int e=sum;
	int ans=0;
	while(s<=e){
		 int mid=s+(e-s)/2;
		 if(ispossible(arr, n, m, mid)){
		 	ans=mid;
		 	e=mid-1;
		 }
		 else{
		 	s=mid+1;
		 }
	}
	return ans;
}
int main(){
	int num[4]={10,20,30,40};
	cout<<allocate(num, 4, 2)<<endl;
	return 0;
}


































