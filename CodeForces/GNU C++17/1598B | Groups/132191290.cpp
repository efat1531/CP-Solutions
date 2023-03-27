#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    test(t)
    {
        int n,a=0,b=0,c=0,d=0,e=0;
        cin>>n;
        int ar[n+1][5];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
            {
                cin>>ar[i][j];
            }
        }
        int ar2[5]= {0,0,0,0,0};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
            {
                //cout<<ar[i][j]<<" ";
                if(ar[i][j]==1)
                {
                    ar2[j]++;
                }
            }
            //cout<<endl;
        }
        //for(int i=0; i<5; i++)
        //{
        //    cout<<"i = "<<i<<" and ar2[i]  = "<<ar2[i]<<endl;
        //}
        bool f=false;
        for(int i=0; i<5; i++)
        {
            if(ar2[i]>=n/2)
            {
                for(int j=i+1; j<5; j++)
                {
                    bool f2=false;
                    if(ar2[j]>=n/2)
                    {
                        for(int k=0; k<n; k++)
                        {
                            if(ar[k][i]==1||ar[k][j]==1)
                            {
                                continue;
                            }
                            else
                            {
                                f2=true;
                                break;
                            }
                        }
                        if(f2==false)
                        {
                            f=true;
                            break;
                        }
                    }
 
                }
                if(f==true)
                {
                    break;
                }
            }
        }
        if(f==true)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
 
 
 
    }
}