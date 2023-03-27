#include<bits/stdc++.h>
#define int long long int
#define test(t) int t;cin>>t;while(t--)
#define nl <<"\n" 
#define db(x) cout<< #x << " "<< x nl
using namespace std;
int32_t main()
{
    test(t)
    {
        int n,i=0;
        cin>>n;
        string s="";
        char c='0';
        bool f=false;
        for(int i=0;i<n-2;i++)
        {
            string s1;
            cin>>s1;
            if(i==0)s+=s1[0],c=s1[1];
            else
            {
                if(c==s1[0])s+=s1[0],c=s1[1];
                else 
                {
                    s+=c;
                    s+=s1[0];
                    c=s1[1];
                }
            }
        }
        s+=c;
        if(s.size()<n)s+='a';
        cout<<s nl;
    }
}