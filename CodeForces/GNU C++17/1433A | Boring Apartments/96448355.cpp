#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v{1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
        int j=1;
        int c=0;
        for(int i=0;i<v.size();i++)
        {
 
            if(n==v[i])
            {
                c+=j;
                break;
            }else
            {
                c+=j;
                if(j>=4)j=1;
                else j++;
            }
        }
        cout<<c<<endl;
    }
}