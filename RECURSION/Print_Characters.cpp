#include<bits/stdc++.h>
using namespace std;
void Solve(int n,vector<string>& ans, string s[]){
    // base case
    if(n==0){
        return ;
    }

    int num=n%10;
    n=n/10;
    Solve(n,ans,s);
    ans.push_back(s[num]);
}
int main(){
    int n;
    cin>>n;
    vector<string> ans;
    string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    Solve(n,ans,s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}