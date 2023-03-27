#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    int t;
    cin>>t;
    while(t--){
 
    string s;
    cin>>s;
    string t;
    cin>>t;
    int c =0 ;
    if(t.size() ==1 && t[0] == 'a')
    {
        cout<<"1"<<endl;
        continue;
    }
    for(int i =0 ;i<s.size();i++)
    {
        if(s[i]=='a')c++;
    }
    if(c==0)
    {
        cout<<"1"<<endl;
        continue;
    }
    int t1 =0 ;
    for(int i =0 ;i<t.size();i++)
    {
        if(t[i]=='a')
        {
            t1++;
            break;
        }
    }
    if(t1>0)
    {
        cout<<"-1"<<endl;
        continue;
    }
    else
    {
        int y= s.size();
        ll r1= (1ll<<y);
        cout<<r1<<endl;
    }
 
    }
 
 
}