#include <bits/stdc++.h>
using namespace std;
vector<int>vec={1,2,2,1,2};
int main()
{
    string s="abcdefghijklmnopqrstuvwxyz";
    string a="fghijklmnopqrstuvwxyzabcde";
    string b="tuvwxyzabcdefghijklmnopqrs";
    cin>>s;
    int i,j=0;
    for(i=0;i<s.size();i++,j++)
    {
        j%=5;
        if(vec[j]&1){
            cout<<a[s[i]-'a'];
        }
        else{
            cout<<b[s[i]-'a'];
        }
    }
}

