#include<bits/stdc++.h>
using namespace std;
bool Palindrome(string s, int i, int j){
    // base case
    if(i>j){
        return 1;
    }

    if(s[i] != s[j]){
        return 0;
}
    i++;
    j--;
   return  Palindrome(s,i,j);
}
int main(){
    string s;
    cin>>s;
    int i=0;
    int j=s.length()-1;
    cout<<Palindrome(s,i,j)<<endl;
    return 0;
}