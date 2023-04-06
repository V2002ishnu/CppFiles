/*#include<iostream>
using namespace std;
int main()
{
	int a=4,b=7;
	float pi=3.14;
	cout<<"\nthe value of a is "<<a<< ".\nthe value of b is "<<b<<".\n the vale of pi is "<<pi;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int glo=3;
void sum(){
	cout<<"glo is"<<glo<<endl;

}
int main()
{
//	int num1,num2;
//	cout<<"enter the value of num1 & num2:"<<endl;                      // '<<' --> this is called INSERTION OPERATOR
//	cin>>num1>>num2;                                           	//cout<<"\nenter the value of num2 :";
//	//cin>>num2;
//	cout<<"\n the sum of num1 & num2 is :"<<num1+num2<<endl;
//	int num=6;
//	num=8;
int glo=6;
sum();
cout<<glo;
//	cout<<"glo is:"<<glo<<endl;
	return 0;
	
}
*/
/*
#include<iostream>
using namespace std;
int c=45;          // gllobal variable
int main()
{
//	int a,b,c;            // local variable
	float d=3.144564;
//	cout<<"enter the value of a & b :"<<endl;
//	cin>>a>>b;
//	c=a+b;
//	cout<<"the value of c is :"<<c<<endl;
//	cout<<"the value of global c is :"<<::c<<endl;
	cout<<"the value of d is :"<<(int) d<<endl;
return 0;	
}
*/
//#include<iostream>
//#include<string.h>
//using namespace std;
//struct employee{
//	int age;
//	float salary;
//	char name[20];
//};
//int main()
//{
/*	int arr[4];
	int *ptr=arr;
	for(int i=0;i<4;i++)
	{
		cout<<"enter the "<<i+1<<" value of elements"<<endl;
		cin>>arr[i];
	ptr++;
		
			}
				for(int i=0;i<4;i++)
	{
		cout<<"the "<<i+1<<" value of elements is"<<arr[i]<<endl;
	
}*/
/*
int arr[3]={1,2,3};
int *ptr=arr;
for(int i=0;i<3;i++)
{
	cout<<arr[i]<<endl;
	*ptr++;
}

#include<iostream>
#include<string.h>
using namespace std;
typedef struct employee{
	int age;
	float salary;
	char name[20];
} ep;
int main()
{
ep e1;
e1.age=20;
e1.salary=250;
strcpy(e1.name,"vishnu");
cout<<e1.age<<endl<<e1.salary<<endl<<e1.name<<endl;
return 0;
}
*/
// WAP to find a nth term of Fibonacci series..........................
#include<iostream>
int fib(int n);
using namespace std;
int main()
{
	int a;
	cout<<"enter the value of a:"<<endl;
	cin>>a;
	cout<<"the nth term of Fibonacci series is:"<<fib(a)<<endl;	
	return 0;
}
int fib(int n)
{
	if(n<2)
	{
		return 1;
	}
	else{
		return fib(n-1) + fib(n-2); 
	}
}






















































