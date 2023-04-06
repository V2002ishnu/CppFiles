
/* WAP to check whether a student is pass or fail?
	int sub1,sub2,sub3;
	int percentage;
	printf("enter the score of 1st subject:");
	scanf("%d",&sub1);
	printf("enter the score of 2nd subject:");
	scanf("%d",&sub2);
	printf("enter the score of 3rd subject:");
	scanf("%d",&sub3);
	percentage=(sub1+sub2+sub3)/3;
	printf("your percentage is\n:%d",percentage);
    if(percentage>=40 && sub1>=33 && sub2>=33 && sub3>=33)
    {
    	printf("you are pass\n");
	}
	else{
		printf("Sorry,you are fail\n");
	}
	return 0;
	*/
/* WAP to find the gretest number?
	int num1,num2,num3,num4;
	printf("enter the 1st number:");
	scanf("%d",&num1);
	printf("enter the 2nd number:");
	scanf("%d",&num2);
	printf("enter the 3rd number:");
	scanf("%d",&num3);
	printf("enter the 4th number:");
	scanf("%d",&num4);
	if(num1>num2 && num1>num3 && num1>num4)
	{
		printf("num1 is the greatest number\n%d",num1);
	}
	if(num2>num1 && num2>num3 && num2>num4)
	{
		printf("num2 is the greatest number\n%d",num2);
	}
	if(num3>num1 && num3>num2 && num3>num4)
	{
		printf("num3 is the greatest number\n%d",num3);
	}
	if(num4>num1 && num4>num2 && num4>num3)
	{
		printf("num4 is the greatest number\n%d",num4);
	
	}

return 0;
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1;
	string s2;
	cin>>s1>>s2;
	int n,m;
	n=s1.length();
	m=s2.length();
	if(n !=m){
		cout<<"0"<<endl;
	}
	else{
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());

	for(int i=0;i<n;i++)
	
	if(s1[i] != s2[i]){
		cout<<"0"<<endl;
	}

	}
	cout<<"1"<<endl;
	return 0;
}
