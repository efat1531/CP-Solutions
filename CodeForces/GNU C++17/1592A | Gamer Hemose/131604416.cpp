#include<bits/stdc++.h>
#define db(x) cout<< #x << " = "<<x<<endl;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h;
        cin>>n>>h;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
 
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int a=v[n-1];
        int b=v[n-2];
        if(h<=a) cout<<1<<endl;
        else
        {
            int c=a+b;
            int d=h%c;
            //db(d);
            int e=h/c;
            e*=2;
            if(d)
            {
                if(d>a)e+=2;
                else e+=1;
                //db(e);
            }
            cout<<e<<endl;
        }
 
    }
}