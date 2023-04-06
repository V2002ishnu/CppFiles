#include<iostream>
#include<algorithm>
using namespace std;
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){

    char name[20];
    cin>>name;
    cout<<"Your name is :"<<name<<endl;
    int n=getLength(name);
    cout<<"The length of the string is :"<<n<<endl;
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<name<<endl;
    return 0;

}