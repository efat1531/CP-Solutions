#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    stack<char>st;
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0;
 
    for(int i=0;i<n;i++)
    {
        if(st.empty())
            st.push(s[i]);
        else
        {
            char c=st.top();
            if(c==s[i])
                st.pop();
            else
                st.push(s[i]);
        }
    }
    if(st.size()==0)
        cout<<"Yes" ;
    else
        cout<<"No";
}