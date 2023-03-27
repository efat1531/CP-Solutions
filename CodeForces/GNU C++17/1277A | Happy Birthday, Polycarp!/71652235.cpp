#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,count=0;
        cin>>n;
        ll a1[9]={1,2,3,4,5,6,7,8,9};
        ll a2[9]={11,22,33,44,55,66,77,88,99};
        ll a3[9]={111,222,333,444,555,666,777,888,999};
        ll a4[9]={1111,2222,3333,4444,5555,6666,7777,8888,9999};
        ll a5[9]={11111,22222,33333,44444,55555,66666,77777,88888,99999};
        ll a6[9]={111111,222222,333333,444444,555555,666666,777777,888888,999999};
        ll a7[9]={1111111,2222222,3333333,4444444,5555555,6666666,7777777,8888888,9999999};
        ll a8[9]={11111111,22222222,33333333,44444444,55555555,66666666,77777777,88888888,99999999};
        ll a9[9]={111111111,222222222,333333333,444444444,555555555,666666666,777777777,888888888,999999999};
        if(n>=1&&n<=10)
        {
            for(int i=0;i<9;i++)
            {
                if(a1[i]<=n)
                {
                    count++;
                    //cout<<i<<" "<<a1[i]<<" "<<endl;
                }else
                {
                    break;
                }
            }
            //cout<<"a1"<<" ";
        }else if(n>10&&n<=100)
        {
            count+=9;
            for(int i=0;i<9;i++)
            {
                if(a2[i]<=n)
                {
                    count++;
                   // cout<<i<<" "<<a2[i]<<" "<<endl;
                }else
                {
                    break;
                }
            }
             //cout<<"a2"<<" ";
        }else if(n>100&&n<=1000)
        {
            count+=18;
            for(int i=0;i<9;i++)
            {
                if(a3[i]<=n)
                {
                    count++;
                    //cout<<i<<" "<<a3[i]<<" "<<endl;
                }else
                {
                    break;
                }
            }
             //cout<<"a3"<<" ";
        }else if(n>1000&&n<=10000)
        {
            count+=27;
            for(int i=0;i<9;i++)
            {
                if(a4[i]<=n)
                {
                    count++;
                   // cout<<i<<" "<<a4[i]<<" "<<endl;
                }else
                {
                    break;
                }
            }
             //cout<<"a4"<<" ";
        }else if(n>10000&&n<=100000)
        {
            count+=36;
            for(int i=0;i<9;i++)
            {
                if(a5[i]<=n)
                {
                    count++;
                   // cout<<i<<" "<<a5[i]<<" "<<endl;
                }else
                {
                    break;
                }
            }
 
             //cout<<"a5"<<" ";
        }else if(n>100000&&n<=1000000)
        {
            count+=45;
            for(int i=0;i<9;i++)
            {
                if(a6[i]<=n)
                {
                    count++;
                   // cout<<i<<" "<<a6[i]<<" "<<endl;
                }else
                {
                    break;
                }
            }
             //cout<<"a6"<<" ";
        }else if(n>1000000&&n<=10000000)
        {
            count+=54;
            for(int i=0;i<9;i++)
            {
                if(a7[i]<=n)
                {
                    count++;
                    //cout<<i<<" "<<a7[i]<<" "<<endl;
                }else
                {
                    break;
                }
            }
             //cout<<"a7"<<" ";
        }else if(n>10000000&&n<=100000000)
        {
            count+=63;
            for(int i=0;i<9;i++)
            {
                if(a8[i]<=n)
                {
                    count++;
                    //cout<<i<<" "<<a8[i]<<" "<<endl;
                }else
                {
                    break;
                }
            }
             //cout<<"a8"<<" ";
        }else if(n>100000000&&n<=1000000000)
        {
            count+=72;
            for(int i=0;i<9;i++)
            {
                if(a9[i]<=n)
                {
                    count++;
                   // cout<<i<<" "<<a9[i]<<" "<<endl;
                }else
                {
                    break;
                }
            }
             //cout<<"a9"<<" ";
        }
        cout<<count<<endl;
    }
}