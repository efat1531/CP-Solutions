/*  Code By Efat Sikder   */
/*         IUBAT          */
#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int o=0,e=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)e++;
            else o++;
        }
        if(n%2!=0)cout<<"NO"<<endl;
        else
        {
            if(e%2==0&&o%2==0)cout<<"YES"<<endl;
            else
            {
                int m=0;
                for(int i=0;i<n-1;)
                {
                    if(v[i+1]-v[i]==1)m++,i+=2;
                    else i++;
                }
                bool b=0;
                while(m>0)
                {
                    e--;
                    o--;
                    m--;
                    if(e%2==0&&o%2==0)
                    {
                        cout<<"YES"<<endl;
                        b=1;
                        break;
                    }
                }
                if(b==0)cout<<"NO"<<endl;
            }
        }
    }
}