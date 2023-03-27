#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,p,f,max1,max2,tk=0;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        b=b/2;
        if(h>c&&b>0)
        {
            if(b>p)
            {
                tk=h*p;
                b-=p;
                if(b>f)tk+=c*f;
                else tk+=c*b;
            }else tk=h*b;
            cout<<tk<<endl;
        }else if(c>h&&b>0)
        {
            if(b>f)
            {
                tk=c*f;
                b-=f;
                if(b>p)tk+=h*p;
                else tk+=h*b;
            }   else tk=c*b;
            cout<<tk<<endl;
        }else if(b>0&&h==c)
        {
            if(p+f<=b)tk=(p*h)+(c*f);
            else tk+=b*h;
            cout<<tk<<endl;
        }else cout<<"0"<<endl;
    }
}