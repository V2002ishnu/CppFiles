#include<iostream>
#include<algorithm>
using namespace std;
void moveZeroes(int arr[], int n){
	int i=0;
	for(int j=0;j<n;j++){
		if(arr[j]!=0){
			swap(arr[i],arr[j]);
			i++;
		}
	}
	
}
void printarray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int a[5]={0,1,0,3,12};
	moveZeroes(a,5);
	printarray(a,5);
	return 0;
}

























