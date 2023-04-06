#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std ;
void printMap(map<int, int> &m){
    cout<<"Size of Map is : "<<m.size()<<endl;
    for(auto &mp : m){
        cout<<mp.first<<" "<<mp.second<<endl;
    }
    cout<<endl;

}

int main(){
    map<int, int> m;
    // m[1]="abc";
    // m[5]="cde";
    // m[7]="efg";
    // m[3]="ghi";
    // printMap(m);
    // m.insert({4,"vishnu"});
    // cout<<endl;
    // printMap(m);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        m.insert({x,y});
    }
    printMap(m);

}