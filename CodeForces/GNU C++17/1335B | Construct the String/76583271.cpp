/*  Code By Efat Sikder   */
/*         IUBAT          */
#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int j=0;
        string s;
        for(int i=0;i<n;i++)
        {
            s+='a'+j;
            j++;
            if(j==b)j=0;
        }
        cout<<s<<endl;
    }
}