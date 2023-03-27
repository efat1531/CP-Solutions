#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    bool ar[1000000]={false};
    ar[0]=ar[1]=true;
    for(long long int i=2;i<=1000000;i++)
    {
        if(ar[i]==false)
        {
            //db(i);
            for(long long int j=i*i;j<=1000000;j=j+i)
            {
                ar[j]=true;
            }
 
        }
    }
    //db(ar[988027]);
 
    int n;
    cin>>n;
    while(n--)
    {
        long long int a;
        cin>>a;
        long long int b=sqrt(a);
      // cout<<b<<" "<<b*b<<endl;
        if(b*b==a)
        {
            if(ar[b]==false)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
 
        }
        else cout<<"NO"<<endl;
    }
}