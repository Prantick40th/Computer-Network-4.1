#include <bits/stdc++.h>
using namespace std;
vector<int>vec={1,2,3,2,1};
int main()
{
    string s="abcdefghijklmnopqrstuvwxyz";
    string a="fghijklmnopqrstuvwxyzabcde";
    string t="mnopqrstuvwxyzabcdefghijkl";
    string b="tuvwxyzabcdefghijklmnopqrs";
    cin>>s;
//try single word//
    int i,j=0;
    for(i=0;i<s.size();i++,j++)
    {
        j%=5;

        if(vec[j]==1){
            cout<<a[s[i]-'a'];
        }
        else if(vec[j]==2){
            cout<<t[s[i]-'a'];
        }
        else if(vec[j]==3){
            cout<<b[s[i]-'a'];
        }
    }
}


