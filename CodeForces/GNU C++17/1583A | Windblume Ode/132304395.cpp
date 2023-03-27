#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    int x=30000;
    vector<bool> is_prime(x+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= x; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= x; j += i)
                is_prime[j] = false;
        }
    }
 
    test(t)
    {
        int n,sum1=0,sum2=0,se=0,so=0,small_odd=205;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
 
            int a;
            cin>>a;
            v.push_back(a);
            sum1+=a;
            if(a%2!=0)
            {
                if(small_odd>a)small_odd=a;
                 so+=a;
            }
 
        }
        if(is_prime[sum1]==false)
        {
            cout<<n<<endl;
            for(int i=0; i<v.size(); i++)
            {
                cout<<i+1<<" ";
            }
            //db(is_prime[sum1]);
            //db(sum1);
            cout<<endl;
        }
        else
        {
            sum1-=small_odd;
            cout<<n-1<<endl;
            for(int i=0;i<n;i++)
            {
                if(v[i]==small_odd)
                    continue;
                else cout<<i+1<<" ";
            }
            cout<<endl;
        }
    }
}