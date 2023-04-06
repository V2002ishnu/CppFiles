//#include<iostream>
//using namespace std;
////char present(char str[], char c);
//#include<string.h>
//int main()

/*{
	char str[100];
	printf("enter ur name :");
		gets(str);	//scanf("%s",str);
	printf("My name is %s",str);
	

	return 0;
}
*/
/*
{
	char *str="vishnu";
	int count=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(*str!='\0')
		{
			count++;
		}
	}
		printf("%d",count);
	
return 0;

}

{
	char s[10]="vishnu";
	present(s,'m');
	return 0;
}
char present(char str[], char c){
	char *ptr=str;
	while(*ptr!='\0'){
		if(*ptr==c)
		{
			printf("yes");
		}
	
		ptr++;
	}
}

{
	char ch[10];
	int a;
	cout<<"enter a character :"<<endl;
	cin>>ch;
	cout<<ch<<endl;
//	a=ch;
//	cout<<"value of a is:"<<a<<endl;
	return 0;
}
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	int s,x,y,z;
	cin>>s>>x>>y>>z;
	int cm=s-(x+y);                       // cm==current_memory
	int high=max(x,y);
	int low=min(x,y);
	if(cm>=z){
		cout<<"0"<<endl;
	}
	else if(cm+high>=z){
		cout<<"1"<<endl;
	}
	else if(cm+low>=z){
		cout<<"1"<<endl;
	}
	
	else{
		cout<<"2"<<endl;
	}
}
	return 0;
}












