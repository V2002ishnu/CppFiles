
//#include<iostream>
//using namespace std;
//int main(){
//char ch;
//cout<<"enter the character:"<<endl;
//cin>>ch;
//if(ch>='a' && ch<='z'){
//	cout<<"This is Lowercase";
//}
//else if(ch>='A' && ch<='Z'){
//	cout<<"This is uppercase";
//}
//else{
//	cout<<"This is Numeric";
//}
//return 0;
//}

//Wap to print sum of first n number using while loop........
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int sum=0;
//	int i=1;
//	while(i<=n){
//		sum=sum+i;   //  sum=sum+=i;
//		i=i+1;          //i++; 
//	}
//	cout<<sum<<endl;
//	return 0;
//}
//WAp to print the sum of first n even numbers.............
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int sum=0;
//	int i=2;
//	while(i<=n){
//		sum=sum+i;
//		i=i+2;
//	}
//	cout<<sum<<endl;
//	return 0;
//}
// Lots of Pattern Problems...........
//01............
//***
//***
//***
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<"*";
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	
//	return 0;
//}
//02.....
//111
//222
//333
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<i;
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//return 0;
//}
//03...............
//123
//123
//123
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<j;
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//return 0;
//}
//04....................
//321
//321
//321
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<n-j+1;
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//return 0;
//}
//05...............
//123
//456
//789
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<((n*i)-n)+j;              // initialize count=1; then count++;   is also a right method
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//return 0;
//}
//06..............
//*
//**
//***
//****
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			cout<<"*";
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	return 0;
//}
//07....................
//1
//22
//333
//4444
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			cout<<i;
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	return 0;
//}
//08...............
//1
//2 3
//4 5 6
//7 8 9 10
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	int count=1;
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			cout<<count<<" ";
//			j=j+1;
//			count=count+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	return 0;
//}
//09................
//1
//2 3
//3 4 5
//4 5 6 7
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			cout<<i+j-1<<" ";
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	return 0;
//}
//10..............
//1
//2 1
//3 2 1
//4 3 2 1
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			cout<<i-j+1<<" ";
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	return 0;
//}
//11.............
//AAA
//BBB
//CCC
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	char ch='A';
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<ch;            // char ch='A' + i -1; is also applicable
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//		ch=ch + 1;
//	}
//	return 0;
//}
//12...............
//ABC
//ABC
//ABC
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		char ch='A';
//		while(j<=n){
//			cout<< char(ch+j-1)<<" ";          
//			j=j+1;
//			
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	return 0;
//}
//13...................
//ABC
//DEF
//GHI
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	char ch='A';
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<ch;
//			j=j+1;
//			ch=ch+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	return 0;
//}
//14.........................
//D
//C D
//B C D
//A B C D
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			cout<<char ('D'+n-i+j-4)<<" ";
//			
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//
//	return 0;
//}
//15.................
//A B C
//B C D
//C D E
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<char ('A'+i+j-2)<<" ";
//			
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//
//	return 0;
//}
//16.....................
//A
//B B
//C C C
//D D D D
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			cout<<char ('A'+i-1)<<" ";
//			
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//
//	return 0;
//}
//17.......................
//A
//B C
//D E F
//G H I J
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	char ch='A';
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			cout<<ch<<" ";
//			ch=ch+1;
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//
//	return 0;
//}
//18..............................
//   *
//  **
// ***
//****
//#include<iostream> 
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int space=n-i;                  // phle spaces ko print kra lo.. 
//		while(space){
//			cout<<" ";
//			space=space-1;
//		}
//		int j=1;                        // fir stars ko print kra lo..
//		while(j<=i){
//			cout<<"*";
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//}
//19.....................
//   1
//  121
// 12321
//1234321
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int space=n-i;
//		while(space){
//			cout<<" ";
//			space=space-1;
//		}
//		int j=1;
//		while(j<=i){
//			cout<<j;
//			j=j+1;
//		}
//		int start=i-1;
//		while(start){
//			cout<<start;
//			start=start-1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	return 0;
//}   
//20....................
//****
//***
//**
//*
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//         int j=1;
//         int start=n-i+1;
//		 while(start){
//		 	cout<<"*";
//		 	j=j+1;
//		 	start=start-1;
//		 }
//		 cout<<endl;
//		 i=i+1;
//	}
//	return 0;
//}
//21.....................
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n)
//	{
//		int space=1;
//		while(space<i){
//			cout<<" ";
//			space=space+1;
//		}
//		int j=1;
//		int start=n-i+1;
//		while(start){
//			cout<<"*";
//			j=j+1;
//			start=start-1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	return 0;
//}
//22.......................
//1111
// 222
//  33
//   4
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int space=1;
//		while(space<i){
//			cout<<" ";
//			space=space+1;
//		}
//		int j=1;
//		while(j<=n-i+1){
//			cout<<i;
//			j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//	}
//	return 0;
//}
//23.....................
//    1
//   22
//  333
// 4444
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int space=n-i;
//		while(space){
//			cout<<" ";
//			space=space-1;
//		}
//		int j=1;
//		while(j<=i){
//		cout<<i;
//		j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//}
//return 0;
//24...................
//1234
// 234
//  34
//   4
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int space=1;
//		while(space<i){
//			cout<<" ";
//			space=space+1;
//		}
//		int j=i;
//		while(j<=n-i+1){
//		cout<<j+;
//		j=j+1;
//		}
//		cout<<endl;
//		i=i+1;
//}
//return 0;
//}
//25..............
//DABANGG PATTERN....................................
//1 2 3 4 5 5 4 3 2 1
//1 2 3 4 * * 4 3 2 1
//1 2 3 * * * * 3 2 1
//1 2 * * * * * * 2 1
//1 * * * * * * * * 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n)
//	{
//		int j=1;
//		int start=1;
//		while(j<=n-i+1){
//			cout<<start<<" ";
//			j=j+1;
//			start=start+1;
//		}
//		int count=1;
//		while(count<=i-1){
//			cout<<"*"<<" ";
//			count=count+1;
//		}
//		int num=1;
//		while(num<=i-1){
//			cout<<"*"<<" ";
//			num=num+1;
//		}
//	     
//		int k=n-i+1;
//		while(k>=1){
//			cout<<k<<" ";
//			k=k-1;
//						
//		}
//			
//		cout<<endl;
//		i=i+1;
//		
//	}
//	return 0;
//}




















































































