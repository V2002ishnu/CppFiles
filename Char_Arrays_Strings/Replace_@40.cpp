#include<iostream>
#include<algorithm>
// #include<string>
// #include<bits/stdc++.h>
using namespace std;
string replace(string &s){
string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
                temp.push_back('@');
                temp.push_back('4');
                temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
   return temp;
}
int main(){
    string s;
    cin>>s;
    int len=s.length();
  
    return 0;
}