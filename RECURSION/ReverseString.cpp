#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void Reverse(string &s,int i, int j){
    // base case
    if(i>j){
        return ;
    }

    swap(s[i],s[j]);
    // R.R.
    i++;
    j--;
    Reverse(s,i,j);
}
int main(){
    // string s;
    // cin>>s;
    // int i=0;
    // int j=s.length()-1;
    // Reverse(s,i,j);
    // cout<<s<<endl;

    string s="i am njasjk";
    // cin>>s;
        // gets(s);
    string str;
    for(int i=0;i<s.length();i++){
        str.push_back(s[i]);
    }
    cout<<s.length()<<endl;
    cout<<str<<endl;
    // return 0;
}