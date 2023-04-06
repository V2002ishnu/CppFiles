/* #include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
	int x=3,y=4;
	printf("the value of x & y is%d \n%d\n",x,y);
	wrong_swap(x,y);
	printf("the value of x & y is%d \n%d\n",x,y);
	swap(&x,&y);
	printf("the value of x & y is%d \n%d\n",x,y);
	return 0;
	
}

void wrong_swap(int a, int b)
{
	int temp;
	a=temp;
	a=b;
	b=temp;
	
}
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
*/
/*#include<stdio.h>
int main()
{
	int i=8;
	int *j=&i;
	printf("the value of i is %d\n",i);
	printf("the address of i is %u\n:",&i);
	printf("the value at the address of i %d\n:",*j);
	printf("the value at the address of i %d\n:",*(&i));
	return 0;
	
}
*/
/*#include<stdio.h>
void print_add(int a);
int main()
{
	int i=5;
	printf("the address of i is %u\n",&i);
	print_add(i);
	
	return 0;
	
}
void print_add(int a)
{
	a=5;
	printf("the address of a is %u\n",&a);
	
}
*/
/*#include<stdio.h>
int value_chg(int i);
int main()
{
	int a,b;
	b=value_chg(a);
	printf("the value of b is %d",b);
	return 0;
}
int value_chg(int i)
{
	int result;
	printf("the value of i is %d\n:",i);
	scanf("%d",&i);
	result=i*10;
	return result;
}
*/
/*#include<stdio.h>
int value_chg(int *i);
int main()
{
	int i,j;
	j=value_chg(&i);
	printf("the value of j is %d",j);
	return 0;
}
int value_chg(int *a)
{
	int result;
	*a=10;
	result=(*a)*10;
	
}
*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
		int arr[n];
		 for(int i=0;i<n;i++){
			cin>>arr[i];
		 }
        
     int sum=0;
    for(int i=0;i<n;i++){
       
        sum+=arr[i];
    }
    cout<<abs(sum)<<endl;

}
    return 0;
}