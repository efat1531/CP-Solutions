#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int indx=-1;
    for(int i=0;i<s.size();i++)
        if(s[i]=='a')
            indx=i+1;
 
    cout <<indx<<endl;
}