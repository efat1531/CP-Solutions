#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    test(t)
    {
        int n,ans=1000000;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            int a=0,b=0,c=0;
            for(int j=0;j<10 and i+j<n;j++)
            {
                if(s[i+j]=='a')a++;
                else if(s[i+j]=='b')b++;
                else if(s[i+j]=='c')c++;
                if(a>=2 and a>b and a>c)
                   ans=min(ans,a+b+c);
            }
 
        }
        if(ans!=1000000)
                cout<<ans<<endl;
            else cout<<-1<<endl;
    }
}