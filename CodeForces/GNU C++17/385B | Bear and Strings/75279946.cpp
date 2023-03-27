#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
int main()
{
       string s;
       cin>>s;
       int sum=0;
       int b=0;
       vector<int>v;
       for(int i=0;i<s.size();)
       {
           if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='r')
           {
               v.push_back(i);
               i+=3;
           }else i++;
       }
       int a=0;
       for(int i=0;i<v.size();i++)
       {
           int temp=v[i]+1;
           int temp2=s.size()-(v[i]+3);
           sum+=(temp-a)*temp2;
           a=temp;
       }
       cout<<sum<<endl;
}