#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define ll long long int
#define ull unsigned long long int
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b;
        ll total=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            b.push_back(temp);
        }
        //cout<<a.size()<<"    "<<b.size()<<endl;
        int ma,mb;
        ma=*min_element(a.begin(),a.end());
        mb=*min_element(b.begin(),b.end());
        //cout<<ma<<"\t"<<mb;
        for(int i=0;i<n;i++)
        {
            if(a[i]>ma&&b[i]>mb)
            {
                int temp1=a[i]-ma;
                int temp2=b[i]-mb;
                int temp3=min(temp1,temp2);
                total+=temp3+(temp1-temp3)+(temp2-temp3);
            }else if(a[i]>ma)
            {
                total+=a[i]-ma;
            }else if(b[i]>mb)
            {
                total+=b[i]-mb;
            }
            //cout<<total<<" ";
        }
        cout<<endl<<total<<endl;
    }
}