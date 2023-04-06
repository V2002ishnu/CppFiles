#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void printSet(set<string> s){
    for(auto &value: s){
        cout<<value<<endl;
    }
    cout<<endl;
}
int main(){
    set<string> s;
    // s.insert("abc");
    // s.insert("efg");
    // s.insert("cde");
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);

    }
    cout<<endl;
    cout<<endl;
    printSet(s);

    return 0;


















}