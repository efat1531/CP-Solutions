#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define ll long long int
#define ull unsigned long long int
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool f=0;
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        int odd1=0,odd2=0;
        if(r%2!=0)odd1++;
        if(g%2!=0)odd1++;
        if(b%2!=0)odd1++;
        if(w%2!=0)odd1++;
        //cout<<odd1<<endl;
        if(odd1>1)
        {
            if(r!=0&&g!=0&&b!=0)
            {
                r-=1;
                g-=1;
                b-=1;
                w+=1;
                if(r%2!=0)odd2++;
                if(g%2!=0)odd2++;
                if(b%2!=0)odd2++;
                if(w%2!=0)odd2++;
                if(odd2<=1)f=1;
            }
        }else f=1;
 
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}