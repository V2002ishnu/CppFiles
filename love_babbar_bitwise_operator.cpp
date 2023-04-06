//#include<iostream>
//using namespace std;
//int main()
//{
//	int a=5;
//	int b=3;
//	cout<<(a&b)<<endl;         //AND operator
//	cout<<(a|b)<<endl;         //OR operator
//	cout<<(a^b)<<endl;         //XOR operator
//	cout<<(~a)<<endl;          //NOT operator
//	cout<<(a<<1)<<endl;
//	cout<<(a>>1)<<endl;
//	return 0;
//}
//How to print a fibonacci series upto n terms.................
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int a=0,b=1;
//	cout<<a<<" "<<b<<" ";
//	int i=1;
//	while(i<=n){
//		int next_num=a+b;
//		cout<<next_num<<" ";
//		a=b;
//		b=next_num;
//		i=i+1;
//	}
//	return 0;
//	
//}
//How to find a given number is prime or not.............
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int i=2;
//	int prime=1;
//	while(i<n){
//		if(n%i==0){
//			prime=0;
//			break;
//		}
//		i=i+1;
//	}
//	if(prime==1){
//		cout<<"This is a prime number..."<<endl;
//	}	
//	else{
//		cout<<"Not a prime number..."<<endl;
//	}
//	return 0;
//}
//Subtract the product and sum of digits of an integer.........
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int product=1;
//	int sum=0;
//	while(n!=0){
//		int digit=(n%10);
//		product=product*digit;
//		sum=sum+digit;
//		n=n/10;
//	}
//	int answer=product-sum;
//	cout<<answer<<endl;
//	return 0;
//}
//count number of 'set bits ' ...........
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int count=0;
//	while(n!=0){
//		if(n&1){
//			count=count+1;
//		}
//		n=n>>1;
//	}
//	cout<<count<<endl;
//}

//How to convert a decimal number into binary number .............

//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int answer=0;
//	int i=0;
//	while(n!=0){
//		int bit=n&1;
//		n=n>>1;
//		answer=bit*pow(10,i)+answer;
//		i=i+1;
//		
//	}
//	cout<<answer<<endl;
//
//	return 0;
//}

//How to convert a binary number into decimal number ............

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	int answer=0;
	while(n!=0){
		int digit=n%10;
		if(digit==1){
			answer=answer+pow(2,i);
		}
		n=n/10;
		i=i+1;
	}
	cout<<answer<<endl;
	return 0;
}
//REVERSE INTEGER..............................
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int ans=0;
//	while(n!=0){
//		int digit=n%10;
//		
//		ans=(ans*10)+digit;
//			if((ans>INT_MAX/10) || (ans<INT_MIN/10) ){ return 0;}
//		n=n/10;
//		
//	}
//	cout<<ans<<endl;
//	return ans;
//}
//POWER OF 2...................
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int ans=0;
// 	int i=0;
// 	while(i<=30){
// 		ans=pow(2,i);
// 			if(ans==n){
// 			cout<<"yes"<<endl;
// 		}
	
// 		i=i+1;
// 		}
		
// 		return 0;
// }
//#include<iostream>	
//using namespace std;
//int update(int a){
//	a-=5;
//	cout<<"a is in update:"<<endl;
//	return a;
//}
//int main()
//{
//	int b=15;
//	b=update(b);
//	cout<<"b in main:"<<b<<endl;
//}
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	















