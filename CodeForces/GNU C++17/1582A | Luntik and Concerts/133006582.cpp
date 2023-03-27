#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " << x <<endl;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int s=a+(b*2)+(c*3);
        int m=max(a,max(b,c));
        s-=m;
        if(a==b and b==c )
            cout<< 0 <<endl;
        else if(s%2==0 and m%2==0)
            cout<<0<<endl;
        else if(m%2!=0 and s%2!=0)
            cout<< 0 <<endl;
        else cout<<1<<endl;
    }
}
 