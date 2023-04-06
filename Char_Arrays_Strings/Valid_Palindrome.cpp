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
char toLowerCase(char ch){
    if( (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
    char temp=ch - 'A' + 'a';
    return temp;
    }
   
}
bool checkpalindrome(string s){
    int st=0;
    int e=s.length()-1;
    while(st<=e){
        if(s[st] != s[e]){
            return 0;
        }
        else{
            st++;
            e--;
        }
}
return 1;
}
bool valid_palindrome(string s){
    string temp="";
    cout<<temp<<endl;
    for(int i=0;i<s.length();i++){
        if(faltu(s[i])){
            temp.push_back(s[i]);
        }
    }
    
    // lower case me kr de 

    for(int i=0;i<s.length();i++){
        temp[i]=toLowerCase(temp[i]);
    }
    return checkpalindrome(temp);
}
int main()
{
    // faltu character hatana hai
    string s;
    cin>>s;
    cout<<s.length();
    if(valid_palindrome(s)){
        cout<<"yes!!"<<endl;
    }
    else{
        cout<<"nope"<<endl;
    }
}