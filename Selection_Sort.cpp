#include<iostream>
#include<algorithm>
using namespace std;

void selection_sort(int arr[], int n){
	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(arr[minIndex] > arr[j]){
				minIndex=j;
			}
		}
		swap(arr[minIndex],arr[i]);
	}
}

void printarray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[5]={6,2,8,4,10};
	selection_sort(arr, 5);
	printarray(arr, 5);
	
	return 0;
	
}












































