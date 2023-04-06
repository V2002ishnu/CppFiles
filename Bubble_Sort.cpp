#include<iostream>
#include<algorithm>
using namespace std;
void bubblesort(int arr[], int n){
	for(int i=1;i<n;i++){                                   // for 1 to n-1 rounds....
		for(int j=0;j<n-i;j++){                             // for comparison in whole round ...
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void printarray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[6]={10,1,7,6,14,9};
	bubblesort(arr, 6);
	printarray(arr, 6);
	return 0;
}






























