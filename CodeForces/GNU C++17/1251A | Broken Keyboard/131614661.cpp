#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    test(t)
    {
        string s;
        cin>>s;
        string a="",b="";
        if(s.size()==1)cout<<s<<endl;
        else
        {
            for(int i=0; i<s.size(); )
            {
                if(s[i]!=s[i+1])
                {
                    a+=s[i];
                    i++;
                }
                else i+=2;
            }
            sort(a.begin(),a.end());
            for(int i=0; i<a.size();i++ )
            {
                if(a[i]!=a[i+1])
                {
                    b+=a[i];
                }
            }
            cout<<b<<endl;
        }
 
    }
}