//#include<iostream>
//using namespace std;
//void printarray(int arr[], int size){
////	for(int i=0;i<size;i++){
////		cout<<"enter the "<<i+1<<" element of array :"<<endl;
////		cin>>arr[i];
////	}
//	for(int i=0;i<size;i++){
//		cout<<"The "<<i+1<<" element of array is :"<<arr[i]<<endl;
//		
//	}
//}
//int main(){
//	int a[5]={1};
//	printarray(a,5);
//	return 0;
//}

//find maximun and minimum element of an array.................

//#include<iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//	
//	int arr[5]={12,25,1,33,85};
//	int n = sizeof(arr)/sizeof(arr[0]);
//	
//		sort(arr,arr+n);
//	
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<endl;
//	}
//	cout<<arr[0]<<endl;
//}

//find sum of all the elements of array.............

//#include<iostream>
//using namespace std;
//int main()
//{
//	int sum=0;
//	int arr[5]={-2,4,7,3,21};
//	for(int i=0;i<5;i++){
//		sum+=arr[i];
//	}
//	cout<<sum<<endl;
//	return 0;
//}

//find Reverse an Array..............

//#include<iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int arr[7]={1,2,3,4,5,6,7};
//	int start=0;
//	int end=6;
//	while(start<=end){
//		swap(arr[start],arr[end]);
//		start++;
//		end--;
//	}
//	for(int i=0;i<7;i++){
//		cout<<arr[i]<<endl;
//		
//	}
//}

//swap Alternate elements................
//
//#include<iostream>
//using namespace std;
//#include <algorithm>
//void printarray(int a[], int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//int main()
//{
//	int arr[6]={1,2,3,4,5,6};
//	int a=0;
////	int b=1;
//	printarray(arr,6);
//	while(a<6){
//		swap(arr[a],arr[a+1]);
//		a+=2;
////		b+=2;
//	}
//	cout<<endl;
//	printarray(arr,6);
//	
//}

//find the unique ...................

//#include<iostream>
//using namespace std;
//#include <algorithm>
//void printarray(int a[], int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//int main(){
//	
//	int arr[5]={1,2,3,1,2}; 
//	int ans=0;
//	for(int i=0;i<5;i++){
//		ans=ans^arr[i];
//	}
//	cout<<ans<<endl;
//	return 0;
//}

//find duplicate.......................

//#include<iostream>
//using namespace std;
//#include <algorithm>
//void printarray(int a[], int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//int duplicate(int a[],int n){
//	int ans=0;
//	for(int i=0;i<n;i++){               // XOR ing all array elements...
//		ans=ans^a[i];
//	}
//	for(int i=1;i<n;i++){           // XOR ing 1 to n-1....
//		ans=ans^i;
//	}
//	return ans;
//}
//int main()
//{
//	int arr[6]={5,1,2,3,4,2};
//	int number=duplicate(arr,6);
//	cout<<number<<endl;
//	return 0;
//}

//Intersection of an araay........................

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int arr1[6]={1,2,2,2,3,4};
//	int arr2[4]={2,2,3,3};
//	int n=sizeof(arr1)/sizeof(arr1[0]);
//	int m=sizeof(arr2)/sizeof(arr2[0]);
//	for(int i=0;i<n;i++){
//		int element=arr1[i];
//		for(int j=0;j<m;j++){
//			if(element==arr2[j]){
//				cout<<element<<endl;
//				arr2[j]=INT_MIN;
//				break;
//			}
//		
//		}
//	}
//	
//	return 0;
//}

//Optimise Solution for intersection of arrays..............

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int arr1[6]={1,2,2,2,3,4};
//	int arr2[4]={2,2,3,3};
//	int n=sizeof(arr1)/sizeof(arr1[0]);
//	int m=sizeof(arr2)/sizeof(arr2[0]);
//	int i=0,j=0;
//	while(i<n && j<m){
//		if(arr1[i]<arr2[j]){
//			i++;
//		}
//		else if(arr1[i]==arr2[j]){
//			cout<<arr1[i]<<endl;
//			i++;
//			j++;
//		}
//		else if(arr1[i]>arr2[j]){
//			j++;
//		}
//	}
//	return 0;
//}

//Pair of Sum..........

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int arr[6]={1,2,3,4,8};
//	int target;
//	cout<<"enter the target value :"<<endl;
//	cin>>target;
//	int n=sizeof(arr)/sizeof(arr[0]);
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]+arr[j]==target){
//				cout<<min(arr[i],arr[j]);
//				cout<<max(arr[i],arr[j]);
//				cout<<endl;
//			}
//		}
//	}
//	return 0;
//}

//Triplets.............

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int arr[6]={4,2,3,1,8};
//	int target;
//	cout<<"enter the target value :"<<endl;
//	cin>>target;
//	int n=sizeof(arr)/sizeof(arr[0]);
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			for(int k=j+1;k<n;k++){
//			
//			if(arr[i]+arr[j]+arr[k]==target){
//			cout<<arr[i];
//			cout<<arr[j];
//			cout<<arr[k];
//				cout<<endl;
//			}
//		}
//	}	
//}
//	return 0;
//}
//#include <iostream>
//#include <iostream>
//using namespace std;
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int a,b,x;
//		cin>>a;
//		cin>>b;
//		cin>>x;
//		int count=0;
//		for(int i=0;i<=INT_MAX;i++){
//			a=a+(i*x);
//			b=b-(i*x);
//			if(a == b){
//				count++;
//				break;
//			}
//		}
//		if(count){
//			cout<<"yes"<<endl;
//		}
//		else{
//			cout<<"no"<<endl;
//		}
//	}
//	return 0;
//}
//...................................

//#include<iostream>
//using namespace std;
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--){
//	
//	int l,k;
//	cin>>l>>k;
//	int arr[k];
//	int sum=0;
//	int sum2=0;
//	for(int i=0;i<k;i++){
//		arr[i]=l/k;
//	}
//	for(int i=0;i<k;i++){
//		sum+=arr[i];
//	}
//	if(sum==l){
//		cout<<arr[k-1]-arr[0]<<endl;
//	}
//	else if(sum!=l){
//		for(int i=0;i<k-1;i++){
//			arr[i]=l/k;
//			sum2+=arr[i];
//			
//		}
//		arr[k-1]=l-sum2;
//		cout<<arr[k-1]-arr[0]<<endl;
//}
//	}
//}
// C++ program for addition of two polynomials
//// using Linked Lists
//#include <bits/stdc++.h>
//using namespace std;

// Node structure containing power and coefficient of
// variable
//struct Node {
//	int coeff;
//	int pow;
//	struct Node* next;
//};
//
//// Function to create new node
//void create_node(int x, int y, struct Node** temp)
//{
//	struct Node *r, *z;
//	z = *temp;
//	if (z == NULL) {
//		r = (struct Node*)malloc(sizeof(struct Node));
//		r->coeff = x;
//		r->pow = y;
//		*temp = r;
//		r->next = (struct Node*)malloc(sizeof(struct Node));
//		r = r->next;
//		r->next = NULL;
//	}
//	else {
//		r->coeff = x;
//		r->pow = y;
//		r->next = (struct Node*)malloc(sizeof(struct Node));
//		r = r->next;
//		r->next = NULL;
//	}
//}
//
//// Function Adding two polynomial numbers
//void polyadd(struct Node* poly1, struct Node* poly2,
//			struct Node* poly)
//{
//	while (poly1->next && poly2->next) {
//		// If power of 1st polynomial is greater then 2nd,
//		// then store 1st as it is and move its pointer
//		if (poly1->pow > poly2->pow) {
//			poly->pow = poly1->pow;
//			poly->coeff = poly1->coeff;
//			poly1 = poly1->next;
//		}
//
//		// If power of 2nd polynomial is greater then 1st,
//		// then store 2nd as it is and move its pointer
//		else if (poly1->pow < poly2->pow) {
//			poly->pow = poly2->pow;
//			poly->coeff = poly2->coeff;
//			poly2 = poly2->next;
//		}
//
//		// If power of both polynomial numbers is same then
//		// add their coefficients
//		else {
//			poly->pow = poly1->pow;
//			poly->coeff = poly1->coeff + poly2->coeff;
//			poly1 = poly1->next;
//			poly2 = poly2->next;
//		}
//
//		// Dynamically create new node
//		poly->next
//			= (struct Node*)malloc(sizeof(struct Node));
//		poly = poly->next;
//		poly->next = NULL;
//	}
//	while (poly1->next || poly2->next) {
//		if (poly1->next) {
//			poly->pow = poly1->pow;
//			poly->coeff = poly1->coeff;
//			poly1 = poly1->next;
//		}
//		if (poly2->next) {
//			poly->pow = poly2->pow;
//			poly->coeff = poly2->coeff;
//			poly2 = poly2->next;
//		}
//		poly->next
//			= (struct Node*)malloc(sizeof(struct Node));
//		poly = poly->next;
//		poly->next = NULL;
//	}
//}
//
//// Display Linked list
//void show(struct Node* node)
//{
//	while (node->next != NULL) {
//		printf("%dx^%d", node->coeff, node->pow);
//		node = node->next;
//		if (node->coeff >= 0) {
//			if (node->next != NULL)
//				printf("+");
//		}
//	}
//}
//
//// Driver code
//int main()
//{
//	struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
//
//	// Create first list of 5x^2 + 4x^1 + 2x^0
//	create_node(5, 2, &poly1);
//	create_node(4, 1, &poly1);
//	create_node(2, 0, &poly1);
//
//	// Create second list of -5x^1 - 5x^0
//	create_node(-5, 1, &poly2);
//	create_node(-5, 0, &poly2);
//
//	printf("1st Number: ");
//	show(poly1);
//
//	printf("\n2nd Number: ");
//	show(poly2);
//
//	poly = (struct Node*)malloc(sizeof(struct Node));
//
//	// Function add two polynomial numbers
//	polyadd(poly1, poly2, poly);
//
//	// Display resultant List
//	printf("\nAdded polynomial: ");
//	show(poly);
//
//	return 0;
#include <iostream>
using namespace std;

int main() {
		
		int t;
		cin>>t;
		while(t--){
			int n;
			cin>>n;
			int ans=0;
			int arr[n];
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
			for(int i=0;i<n;i++){
			int count=0;
				for(int j=1;j<n;j++){
					if(arr[i]==arr[j]){
						count++;
					}
				}
			if(count==(n-1)){
				cout<<0<<endl;
				break;
			}	
			if(count>=(n/2)){
				cout<<n-count<<endl;
				break;
			}
			else if(count==0){
				cout<<n-1<<endl;
			}
			
			}
		}
		return 0;
}






















































