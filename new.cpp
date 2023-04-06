// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int main()
// {

//     vector<int> arr2;

//     arr2=arr;

//     vector<int> v;
//     reverse(arr.begin(),arr.end());
//     for(int i=0;i<n;i++){
//         int count=0;
//         int j=n-i-1;
//         while(j>=0){

//             if(arr2[i] > arr[j-1]){
//                 j--;
//             }
//             else{
//                 v.push_back(arr[j-1]);
//                 count++;
//                 break;
//             }
//         }
//         if(count==0){
//         v.push_back(-1);
//         }
//     }

//    return v;
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool ans(string s)
{
    if (s == "YES" || s == "Yess" || s == "se")
    {

        return 0;
    }
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int n = s.length();
        int i = 0;
        int ct = 0;
      
        if (ans(s))
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            cout<<s<<endl;
            while (i < n - 1)
            {
                
                if (s[i] == 'y')
                {
                   
                    if (s[i + 1] != 'e')
                    {
                        break;
                    }

                    else
                    {
                        i++;
                        ct++;
                        continue;
                    }
                }
                
                else if (s[i] == 'e')
                {
                    if (s[i + 1] != 's')
                    {
                        break;
                    }

                    else
                    {
                        i++;
                        ct++;
                        continue;
                    }
                }

                else if (s[i] == 's')
                {
                    if (s[i + 1] != 'y')
                    {
                        break;
                    }
                    else
                    {
                        i++;
                        ct++;
                        continue;
                    }
                }
            }
        }
        else
        {
            cout << ct << endl;
            if (ct == n - 1)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    
    return 0;
}
