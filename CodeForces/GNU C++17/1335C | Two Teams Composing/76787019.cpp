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
            map<int,int>mp;
            vector<int>v;
            vector<int>v1;
            for(int i=0;i<n;i++)
            {
                int a;
                cin>>a;
                mp[a]++;
                v.push_back(a);
            }
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
            {
                if(v[i]!=v[i-1])v1.push_back(v[i]);
            }
            int mm=0;
            for(int i=0;i<v1.size();i++)
            {
                if(mp[v1[i]]>mm)
                {
                    mm=mp[v1[i]];
                }
            }
            if(mm==1&&n>1)cout<<1<<endl;
            else
            {
              if((n==1)||(n==1&&v[0]==v[1]))cout<<0<<endl;
              else if(n==1&&v[0]!=v[1])cout<<1<<endl;
              else
              {
                if(mm==mp.size())cout<<mm-1<<endl;
                else if(mm>mp.size())cout<<mp.size()<<endl;
                else if(mp.size()>mm)cout<<mm<<endl;
              }
            }
        }
    }