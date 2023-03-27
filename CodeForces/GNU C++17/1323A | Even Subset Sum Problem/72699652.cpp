/*Template of Efat Sikder*/
/*       ID-20103033     */
#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int a[n];
        bool g=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)g=1,k=i;
        }
        if(g==1)cout<<"1"<<endl<<k+1<<endl;
        else if(n!=1)
        {
            cout<<"2"<<endl<<1<<" "<<2<<endl;
        }else cout<<"-1"<<endl;
    }
}