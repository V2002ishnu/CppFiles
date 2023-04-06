/*#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight(); 		//function prototype
int main()
{
	goodmorning();
	goodafternoon();
	goodnight();			//function call
	return 0;
	 
}

void goodmorning()
{
	printf("good morning baby\n");			//function definition
}

void goodafternoon()
{
	printf("good afternoon baby\n");			//function definition
}
void goodnight()
{
	printf("good night baby\n");			//function definition
}
*/
/* WAP to print a sum of two given number by using functions. 
#include<stdio.h>
int sum( int a, int b );
int main()
{
	int a,b,c;
	c=sum(a,b);
	printf("the value of c is:%d\n",c);
	return 0;	
}
int sum (int a, int b )
{
	int result;
	printf("enter the values of a & b:\n");
	scanf("%d%d",&a,&b);
	result=a+b;
	return result;
}
*/ 
/*wap to print a average of three numbers .
#include<stdio.h>
int avg(int a, int b, int c);
int main()
{
	int p,q,r,average;
	average=avg(p,q,r);
	printf("the average of the given number is :%d\n");
	return 0;
}
int avg(int a, int b, int c)
{
	int result;
	printf("enter the value of a, b & c:\n\n");
	scanf("%d%d%d",&a,&b,&c);
	result=(a+b+c)/3;
	return result;
}
*/
/* wap to convert temperature in celcius into fahrenheit
#include<stdio.h>
float convert(float C);
int main()
{
	float temp,C;
	temp=convert(C);
	printf("the temp in fahrenheit is:%f",temp);
	return 0;
}
float convert(float C)
{
	float result,c;
	printf("enter the value of temp in Celcius:\n");
	scanf("%f",&c);
	result=(9*c)/5+32;
	return result;
}
*/
/* IMP question .
#include<stdio.h>
int main()
{
	int a=3;
	printf("%d\n%d\n%d\n",a,++a,a++);
	return 0;
}
*/
/* IMP question
#include<stdio.h>
int main()

{
	if(printf(" "))
	{
		printf("Hi");
	}
	else
	
	{
		printf("hello");
	}
	
return 0;
}
*/
/* star problems using loops*/
/* #include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
return 0;

}
*/
/* Q2-#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				printf("*");
			}
		
		}
		printf("\n");
	}
	return 0;
}
*/

#include<stdio.h>
void reverse_array(int a[], int n);
int main()
{
	int arr[7] ={1,2,3,4,5,6,7};
	reverse_array(arr,7);
	for(int i=0;i<7;i++){
		printf("the values of %d element is :%d\n",i+1,arr[i]);
	}
	
	return 0;

}
void reverse_array(int a[], int n)
{
	int temp;
	for(int i=0;i<n/2;i++)
	{
		temp = a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
		
	}
}






















