#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int x,y;
    bool b=0,w=1;
    cin>>x>>y;
    while(b==0)
    {
        if(x>=2&&y>=2)
        {
            x-=2;
            y-=2;
            w=0;
        }else if(x>=1&&y>=12)
        {
            x-=1;
            y-=12;
            w=0;
        }else if(x>=0&&y>=22)
        {
            x-=0;
            y-=22;
            w=0;
        }else b=1;
       // cout<<"1 "<<x<<" "<<y<<endl;
        //Next Turn
        if(x>=0&&y>=22)
        {
            x-=0;
            y-=22;
            w=1;
        }else if(x>=1&&y>=12)
        {
            x-=1;
            y-=12;
            w=1;
        }else if(x>=2&&y>=2)
        {
            x-=2;
            y-=2;
            w=1;
        }else b=1;
        //cout<<"2 "<<x<<" "<<y<<endl;
    }
    if(w==1)cout<<"Hanako";
    else cout<<"Ciel";
}