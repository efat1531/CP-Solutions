#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int wp=0,bp=0;
    for(int i=0;i<64;i++)
    {
        char a;
        cin>>a;
        if(a=='Q')wp+=9;
        if(a=='R')wp+=5;
        if(a=='B')wp+=3;
        if(a=='N')wp+=3;
        if(a=='P')wp+=1;
        if(a=='q')bp+=9;
        if(a=='r')bp+=5;
        if(a=='b')bp+=3;
        if(a=='n')bp+=3;
        if(a=='p')bp+=1;
    }
    if(wp>bp)cout<<"White";
    else if(bp>wp)cout<<"Black";
    else if(bp==wp)cout<<"Draw";
}