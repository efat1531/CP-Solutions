#include<bits/stdc++.h>
#define db(x) cout<< #x <<" = "<<x<<endl
#define ll long long int
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    test(t)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=0; i<k; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int cp=0;
        int ms=0;
        for(int i=v.size()-1; i>=0; i--)
        {
            if(cp<v[i])
            {
                int m=n-v[i];
                //db(m);
                cp+=m;
                //db(cp);
                ms++;
            }
            else
            {
                break;
            }
 
        }
        cout<<ms<<endl;
 
    }
}