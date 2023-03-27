#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    test(t)
    {
        string s;
        cin>>s;
        int a,b;
        bool f=false;
        for(int i=s.size()-1; i>0; i--)
        {
            if(s[i]=='0')
            {
                for(int j=i-1; j>=0; j--)
                {
                    if(s[j]=='5'||s[j]=='0')
                    {
                        a=i;
                        b=j;
                        f=true;
                        break;
                    }
                }
            }
            if(f==true)
            {
                //cout<<a+1<<b+1<<s.size()<<endl;
                break;
            }
 
        }
        int c,d;
        bool g=false;
        for(int i=s.size()-1; i>0; i--)
        {
            if(s[i]=='5')
            {
                for(int j=i-1; j>=0; j--)
                {
                    if(s[j]=='2'||s[j]=='7')
                    {
                        g=true;
                        c=i;
                        d=j;
                        break;
 
                    }
                }
                if(g==true)
                {
                    //cout<<c+1<<d+1<<s.size()<<endl;
                    break;
                }
            }
        }
 
        int m,n;
        m=(a-b-1)+(s.size()-a-1);
        //db(m);
        n=(c-d-1)+(s.size()-c-1);
        //db(c);
        if(f==true&&g==true)
        {
            cout<<min(m,n)<<endl;
        }else if(f==true)
        {
            cout<<m<<endl;
        }else cout<<n<<endl;
 
    }
}