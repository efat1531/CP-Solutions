#include<bits/stdc++.h>
#define db(x) cout<< #x <<" = "<<x<<endl
#define ll long long int
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    test(t)
    {
        int n;
        cin>>n;
        bool neg_trac=true;
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        }
        sort(v1.begin(),v1.end());
        if(v1[0]==v1[n-1])
        {
            cout<<-1<<endl;
        }else
        {
            for(int i=0;i<v1.size()-1;i++)
            {
                if(v1[i]!=v1[i+1])
                {
                    v2.push_back(v1[i+1]-v1[i]);
                }
            }
            sort(v2.begin(),v2.end());
            //for(int i=0;i<v2.size();i++)
           // {
               // db(v2[i]);
           // }
            int rem=v2[0];
            for(int i=0;i<v2.size();i++)
            {
                if(v2[i]%rem!=0)
                {
                    rem=v2[i]%rem;
                    i=0;
                }
            }
            cout<<rem<<endl;
        }
    }
}