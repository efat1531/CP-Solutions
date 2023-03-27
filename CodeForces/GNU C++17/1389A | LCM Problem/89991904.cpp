#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define ll long long int
#define ull unsigned long long int
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        if((l*2)>r)cout<<-1<<" "<<-1<<endl;
        else
        {
            cout<<l<<" "<<2*l<<endl;
        }
    }
}