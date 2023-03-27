#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    cin>>a;
    int b=strlen(a);
    int c=0;
    bool g=0,k=0;
    for(int i=b-1;i>=-1;i--)
    {
        if(a[i]!='0')
        {
            break;
        }else
        {
            c++;
        }
    }
   //cout<<b<<" "<<c<<endl;
    if(c==b)
    {
        cout<<"YES";
    }else
    {
        for(int i=0,j=b-c-i-1;i<b-c;i++,j--)
        {
           if(a[i]==a[j])
           {
               g=1;
           }else
           {
               k=1;
           }
        }
        //cout<<g<<" "<<k<<endl;
        if(g==1&&k==0)
        {
            cout<<"YES";
        }else
        {
            cout<<"NO";
        }
    }
 
}