#include<bits/stdc++.h>
using namespace std;
#define nl <<"\n"
const long long int MOD=1e9+7;
 
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<int>num;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            num.push(a);
        }
        long long int x=0;
        //cout<<num.size() nl;
        bool turnA=true;
        while(!num.empty())
        {
            long long a=num.top();num.pop();
            //cout<<x<<" "<<a nl;
            if(turnA^false)
            {
                turnA=false;
                if(!(a&1))
                    x+=a;
            }else
            {
                turnA=true;
                if(a&1)
                    x-=a;
            }
        }
        if(x==0)
            cout<<"Tie" nl;
        else if(x>0)
            cout<<"Alice" nl;
        else
            cout<<"Bob" nl;
    }
}