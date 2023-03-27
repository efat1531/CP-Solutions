#include<bits/stdc++.h>
#include<cmath>
#include<string>
#include<vector>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    //Vector Declare
    vector<ll>a;
    vector<ll>b;
    vector<ll>c;
    vector<ll>ab;
    vector<ll>bc;
    vector<ll>ca;
    vector<ll>abc;
    vector<ll>sum;
    //Main Part
    for(ll i=0;i<n;i++)
    {
        ll j;
        string s;
        cin>>j>>s;
        if(s.size()==1)
        {
        if(s[0]=='A'&&s.size()==1) a.push_back(j);
        else if(s[0]=='B'&&s.size()==1) b.push_back(j);
        else if(s[0]=='C'&&s.size()==1) c.push_back(j);
        }else if(s.size()==2)
        {
        if((s[0]=='A'&&s[1]=='B')||(s[0]=='B'&&s[1]=='A')) ab.push_back(j);
        else if((s[0]=='C'&&s[1]=='B')||(s[0]=='B'&&s[1]=='C')) bc.push_back(j);
        else if((s[0]=='A'&&s[1]=='C')||(s[0]=='C'&&s[1]=='A'))ca.push_back(j);
        }else abc.push_back(j);
    }
    //Sort
    if(a.size()!=0)sort(a.begin(),a.end());
    if(b.size()!=0)sort(b.begin(),b.end());
    if(c.size()!=0)sort(c.begin(),c.end());
    if(ab.size()!=0)sort(ab.begin(),ab.end());
    if(bc.size()!=0)sort(bc.begin(),bc.end());
    if(ca.size()!=0)sort(ca.begin(),ca.end());
    if(abc.size()!=0)sort(abc.begin(),abc.end());
    //Process
    if(a.size()!=0&&b.size()!=0&&c.size()!=0)
    {
        sum.push_back(a[0]+b[0]+c[0] );
    }
    if(a.size()!=0&&bc.size()!=0)
    {
        sum.push_back(a[0] +bc[0] );
    }
    if(b.size()!=0&&ca.size()!=0)
    {
        sum.push_back(b[0] +ca[0] );
    }
    if(c.size()!=0&&ab.size()!=0)
    {
        sum.push_back(c[0] +ab[0] );
    }
    if(ab.size()!=0&&bc.size()!=0)
    {
        sum.push_back(ab[0]+bc[0]);
    }
    if(bc.size()!=0&&ca.size()!=0)
    {
        sum.push_back(bc[0]+ca[0]);
    }
    if(ca.size()!=0&&ab.size()!=0)
    {
        sum.push_back(ab[0]+ca[0]);
    }
    if(abc.size()!=0)sum.push_back(abc[0] );
    if(sum.size()!=0)
    {
        sort(sum.begin(),sum.end());
        cout<<sum[0]<<endl;
    }else cout<<-1<<endl;
 
 
}