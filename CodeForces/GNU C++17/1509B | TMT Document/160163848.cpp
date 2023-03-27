#include<bits/stdc++.h>
using namespace std;
#define nl <<"\n"
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>Tpos;
        vector<int>Mpos;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T')
                Tpos.push_back(i+1);
            else
                Mpos.push_back(i+1);
        }
        if(Tpos.size()&1)
            cout<<"NO" nl;
        else if(Tpos.size()==(2*Mpos.size()))
        {
            bool f=false;
            for(int i=0,j=0,k=Tpos.size()/2;i<Tpos.size()/2;i++,j++,k++)
            {
                if(Tpos[i]>Mpos[j] or Mpos[j]>Tpos[k])
                {
                    f=true;
                    break;
                }
            }
            if(f)
                cout<<"NO" nl;
            else
                cout<<"YES" nl;
        }else
            cout<<"NO" nl;
    }
}