#include<bits/stdc++.h>
#define db(x) cout<< #x <<" = "<< x<<endl
#define test(t) int t;cin>>t;while(t--)
#define read(x) int x; cin>>x
#define sz(s) s.size()
#define sortof(x) sort( s.begin(),s.end())
#define ff first
#define ss second
using  namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int ar[10],arr[10];
    for(int i=0; i<7; i++)
    {
        read(a);
        sum+=a;
        ar[i+1]=sum;
        arr[i]=a;
       // db(sum);
    }
    sum=n%sum;
   // db(sum);
    if(sum)
    {
 
        for(int i=1;i<8;i++)
        {
            if(sum<=ar[i])
            {
                cout<<i<<endl;
                break;
            }
        }
    }else
    {
         for(int i=6;i>=0;i--)
        {
            if(arr[i]>0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
 
}