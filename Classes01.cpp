// How to declare a Classes in C++..................................
/*#include<iostream>
using namespace std;
class employee
{ 
	private: 
	int a,b,c;
		
	public:	
	int d,e;
	void setdata(int a1, int b1, int c1);
	void getdata(){
		cout<<"the value of a is:"<<a<<endl;
		cout<<"the value of b is:"<<b<<endl;
		cout<<"the value of c is:"<<c<<endl;
		cout<<"the value of d is:"<<d<<endl;
		cout<<"the value of e is:"<<e<<endl;
		
	}
};
void employee:: setdata(int a1, int b1, int c1){
a=a1;
b=b1;
c=c1;	
} 

int main()
{
	employee vishnu;
	vishnu.d=23;
	vishnu.e=53;
	vishnu.setdata(23,34,45);
	vishnu.getdata();
	return 0;
}
*/
//  OOPs Recap & Nesting of Member Functions in C++.............................
/*
#include<iostream>
#include<string>
using namespace std;
class binary{
	private:
		string s;
		public:
			void read(void);
			void chk_bin(void);
};
void binary :: read(void){
	cout<<"enter the binary number :"<<endl;
	cin>>s;
}
void binary :: chk_bin(void){
	for(int i=0;i<s.length();i++){
	
	if(s.at(i)!='0' && s.at(i)!='1')
	{
		cout<<"wrong Binary Number:"<<endl;
//		exit(0);
		break;
	}
}
}
int main()
{
	binary b;
	b.read();
	b.chk_bin();
	cout<<"THANK UUU............"<<endl;
	return 0;
}
}
*/
//  C++ Object Memory Allocation & using Arrays in classes............
/*
#include<iostream>
using namespace std;
class shop{
	int itemid[100];
	int itemprice[100];                                  // by default all code snippets are private 
	int counter=0;
	public:
//		void initcounter(void){
//			counter=0;
//		}
		void setprice(void);
		void displayprice(void);
	
};
void shop::setprice(void){
	cout<<"Enter the id of item :"<<endl;
	cin>>itemid[counter];
	cout<<"Enter the price of item :"<<endl;
	cin>>itemprice[counter];
	counter++;
}
void shop::displayprice(void){
	for(int i=0;i<counter;i++)
	{
		cout<<"The price of item id "<<itemid[i]<<" is :"<<itemprice[i]<<endl;
	}
}
int main()
{
	shop fps;
//	fps.initcounter();
	fps.setprice();
	fps.setprice();
	fps.setprice();
	fps.displayprice();
	return 0;
} 
*/
// Static Data Members & Methods in C++ OOPS..............................01
/*#include<iostream>
using namespace std;
class employee{
	int id;
	int count=0;
	public:
		void setdata(void);
		void getdata(void);
};
void employee::setdata(void){                                      
	cout<<"Enter the id of employee:"<<endl;
	cin>>id;
	count++;
}
void employee::getdata(void){
	cout<<"the id of employee is :"<<id<<endl;
}
int main()
{
	employee aarav,abhi,harsh;
	aarav.setdata();
	aarav.getdata();                                                 // In this program 01 count variable is set 0 in all objects i.e. aarav, harsh, abhi 
	harsh.setdata();
	harsh.getdata();                                                    //cannot pass the value of count object by object i.e. this is not a convinient method... 02 is convinient..   
	abhi.setdata();
	abhi.getdata();
	return 0;
}*/
// Static Data Members & Methods in C++ OOPS..............................02 
/*#include<iostream>
using namespace std;
class employee{
	int id;
	static int count;                      // declare a static variable // static int count=0; is not permiitted i.e. syntax error
	public:
		void setdata(void);
		void getdata(void);
		static void getcount(void){
	cout<<"the value of count is :"<<count<<endl;}
};
	

void employee::setdata(void){                                      
	cout<<"Enter the id of employee:"<<endl;
	cin>>id;
	count++;
}
void employee::getdata(void){
	cout<<"the id of employee is :"<<id<<endl;
}
int employee::count=100;                      // define a static variable //  here if u write count=0;  then it will be right method..
int main()
{
	employee aarav,abhi,harsh;
	aarav.setdata();                                                  
	aarav.getdata();
	employee::getcount();
	harsh.setdata();                                                      
	harsh.getdata();
	employee::getcount();
	abhi.setdata();
	abhi.getdata();
 	employee::getcount();
	return 0;
}
*/
//Array of objects .................
/*#include<iostream>
using namespace std;
class employee{
	int id;
	int salary;
	public:
		void setdata(void){
			cout<<"Enter the id of employee :"<<endl;
			cin>>id;
		}
		void getdata(void){
			cout<<"The id of employee is:"<<id<<endl;
		}
};
int main()
{
	employee google[5];
	for (int i=0;i<5;i++)
	{
		google[i].setdata();
		google[i].getdata();
	}
	return 0;
}
*/
//Passing objects as Arguments..................
/*
#include<iostream>
using namespace std;
class complex{
	int a;
	int b;
	public:
		void setdata(int a1, int b1){
		a=a1;
		b=b1;
		}
		void getdta(void){
			cout<<"the complex number is :"<<a<<"+"<<b<<"i"<<endl;
		}
		void setdata_bysum(complex o1, complex o2){
			a=o1.a+o2.a;
			b=o1.b+o2.b;
			
			
		}
};
int main()
{
	complex c1,c2,c3;
	c1.setdata(1,3);
	c1.getdta();
	c2.setdata(2,4);
	c2.getdta();
	c3.setdata_bysum(c1,c2);
	c3.getdta();
	cout<<"THANKUUU..............."<<endl;
	return 0;
}
*/
//Friend function...........
#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		void setdata(int a1, int b1){
			a=a1;
			b=b1;
		}
		void getdata(void){
		cout<<"The complex number is :"<<a<<"+"<<b<<"i"<<endl;
		}
		friend complex sumcomplex(complex o1, complex o2);
};
complex sumcomplex(complex o1, complex o2){
	complex o3;
	o3.setdata((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main()

{	
	complex c1,c2,sum;
	c1.setdata(2,5);
	c1.getdata();
	c2.setdata(3,7);
	c2.getdata();
	sum=sumcomplex(c1,c2);
	sum.getdata();
	return 0;
}


































































