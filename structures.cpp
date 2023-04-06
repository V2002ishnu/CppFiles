// #include<stdio.h>
// #include<string.h>

// struct employee{
// 	int age;
// 	float salary;
// 	char Name[10];
// };
// int main()
// {
// 	struct employee e1;                        // Just like as int sum;
// 	e1.age=33;
// 	e1.salary=8000.74599;
// 	strcpy(e1.Name, "vishnu");
// 	printf("enter the age of the employee:");
// 	scanf("%d",&e1.age);
// 	printf("enter the salary of employee:");
// 	scanf("%f",&e1.salary);
// 	printf("enter the name of employee:");
// 	scanf("%s",e1.Name);
// 	return 0;
// }
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(string str,int n)
{
   sort(str.begin(),str.end());
   int zeros=0;
   int ones=0;
   for(int i=0;i<str.length();i++)
   {
       if(str[i]=='0')
       zeros++;
       else
       ones++;
   }
   return zeros*ones;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int num=solve(str,n);
        int ct=1;
        vector<int> v;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==str[i+1])
            ct++;
            else
        {
            v.push_back(ct);
            ct=1;
        }
        }
        sort(v.begin(),v.end());
        int size=v.size();
        int num2=v[size-1];
        int ans=num2*num2;
        if(num>=ans)
        cout<<num<<endl;
        else
        cout<<ans<<endl;
    }

    return 0;
}
