#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b;
        vector<int>tm;
        for(int i=0;i<n;i++)
        {
            int m,p;
            cin>>m>>p;
            a.push_back(m);
            b.push_back(p);
        }
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            tm.push_back(m);
        }
        int ar=a[0]+tm[0];
        int d=max(b[0],(ar+(((1+b[0])-a[0])/2)));
 
        for(int i=1;i<n;i++)
        {
            ar=d+a[i]-b[i-1]+tm[i];
            d=max(b[i],(ar+(((1+b[i])-a[i])/2)));
           // cout<<"Arr- "<<ar<<"    "<<"Dep- "<<d<<endl;
        }
        cout<<ar<<endl;
    }
}