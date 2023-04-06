// #include<iostream>
// using namespace std;
#include<stdio.h>
int binarysearch(int arr[], int n, int key){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;                     //this means mid=(start + end) / 2  just bcoz start + end may be out of my int range.....
		if(key==arr[mid]){
			return mid;
		}
		
		else if(key>arr[mid]){
			start=mid+1;
		}
		
		else if(key<arr[mid]){
			end=mid-1;
			
		}
	
		mid=start+(end-start)/2;
		}
		return -1;
	}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int s=0;
	int e=n-1;
	int ans=binarysearch(arr,s,e);
	// cout<<"the value at index :"<<ans<<endl;
	printf("the value at index : %d", ans);
	return 0;
	
}
//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		string s;
//		cin>>s;
//		int count=0;
//		int flag=0;
//		for(int i=0;i<n;i++){
//			char ch=s[i];
//			if(ch=='a' || ch=='e' || ch=='i' ||  ch=='o' || ch=='u' ){
//				count=0;
//				continue;
//			}
//			else{
//				count++;
//				if(count>=4){
//					flag=1;
//					break;
//				}
//			}
//		}
//		if(flag){
//			cout<<"no"<<endl;
//		}
//		else{
//			cout<<"yes"<<endl;
//		}
//	}
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int a[10];
//	int sumeven=0;
//	int oddsum=0;
//	for(int i=0;i<10;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<10;i++){
//		if(a[i] % 2 == 0){
//			sumeven=sumeven+a[i];
//		}
//		else{
//			oddsum=oddsum+a[i];
//		}
//	}
//	cout<<sumeven<<endl;
//	cout<<oddsum<<endl;
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int rev;
	while(n!=0){
		int dig=n%10;
		n=n/10;
		rev=(rev * 10)+dig;
	}	
	cout<<rev<<endl;
	return 0;
}








































