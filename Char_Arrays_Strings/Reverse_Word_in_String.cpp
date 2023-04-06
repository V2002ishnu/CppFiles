#include<iostream>
#include<algorithm>
// #include<string>
// #include<bits/stdc++.h>
using namespace std;
bool faltu(char ch){
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
        return 1;
    }
    else{
        return 0;
    }
}
void reverse(string s){
    int st=0;
    int e=s.length()-1;
    while(st <= e){
        swap(s[st],s[e]);
        st++;
        e--;
    }
}
int main(){

        string s;
        cin>>s;
        cout<<s.length()<<endl;
        string temp="";
    
    for(int i=0;i<s.length();i++){
        temp.push_back(s[i]);
        
    }
    for(int i=0;i<s.length();i++){
        if(temp[i]=='\0'){
            reverse(temp);
        }
    }
    
    cout<<temp<<endl;
        
        
}