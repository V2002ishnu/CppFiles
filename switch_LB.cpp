//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch='A';
//	int a=2;
//	switch (ch){
//		case 1:
//			cout<<"numeric"<<endl;
//			break;
//		
//		case 'A':
//		cout<<"character"<<endl;
//		break;
//		
//		default:
//		cout<<"default case"<<endl;	
//	}
//	
//	return 0;
//}

//Create a Mini Calculator which has only two inputs...............

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a , b;
//	cout<<"Enter the 1st number :"<<endl;
//	cin>>a;
//	cout<<"Enter the 2nd number :"<<endl;
//	cin>>b;
//	char op;
//	cout<<"Enter the operation whatever you want :"<<endl;
//	cin>>op;
//	switch (op){
//		
//		case '+':
//			cout<<"Answer is :"<<a+b<<endl;
//			break;
//			
//		case '-':
//		cout<<"Answer is :"<<a-b<<endl;
//		break;
//		
//		case '*':
//		cout<<"Answer is :"<<a*b<<endl;
//		break;
//		
//		case '/':
//		cout<<"Answer is :"<<a/b<<endl;
//		break;	
//		
//		case '%':
//		cout<<"Answer is :"<<a%b<<endl;
//		break;
//		
//		default:
//		cout<<"Please Enter a Valid Operation :"<<endl;	
//	}
//	return 0;	
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	float n;
//	cin>>n;
//	int key;
//	cin>>key;
//	float c=n/key;
////	cout<<c<<" ";
//	float arr[key];
//	arr[0]=1;
//	
//	for(int i=0;i<key;i++){
//		arr[i+1]=arr[i]+c;
//		
//	}
//	for(int i=0;i<key;i++){
//		cout<<arr[i]<<" ";
//		
//		}
//}
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				arr[i][j]=1;
			}
			else{
				arr[i][j]=0;
			}
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}




































