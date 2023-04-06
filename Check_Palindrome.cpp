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
char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
    char temp=ch - 'A' + 'a';
    return temp;
    }
   
}
bool SpecialCheckStart(char name[], int n){
    int s=0;
    int e=n-1;
    if((name[s]>='a' && name[s]<='z') || (name[s]>='A' && name[s]<='Z') || (name[s]>='0' && name[s]<='9')){
        return 1;
    }
    else{
        
        s++;
        return 1;
    }
}
bool SpecialCheckEnd(char name[], int n){
     int s=0;
    int e=n-1;
     if((name[e]>='a' && name[e]<='z') || (name[e]>='A' && name[e]<='Z') || (name[e]>='0' && name[e]<='9')){
        return 1;
    }
    else{
        e--;
        return 1;
    }

}
bool checkpalindrome(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if( toLowerCase(name[s]) != toLowerCase(name[e]) ){
            return 0;
        }
       else if(SpecialCheckStart(name, n)){
        s++;
       }
        else if(SpecialCheckEnd(name, n)){
        e--;
       }
      else{
        s++;
        e--;
      }  
       
    }
    return 1;

}
int main(){
    char name[20];
    cin>>name;
    int n=getLength(name);
    if(checkpalindrome(name, n)){
        cout<<"Yes it is Palindrome"<<endl;
    }
    else{
        cout<<"No!! it is not a Palindrome"<<endl;
    }
}