#include<bits/stdc++.h>
#define db(x) cout<< #x << "  "<<x<<endl
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool f=false;
    for(int i=0;i<s.size();)
    {
        if(s[i]=='1' and s[i+1]=='4' and s[i+2]=='4')i+=3;
        else if(s[i]=='1' and s[i+1]=='4')i+=2;
        else if(s[i]=='1')i++;
        else
            {
                f=true;
                break;
            }
    }
    if(f==true)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}