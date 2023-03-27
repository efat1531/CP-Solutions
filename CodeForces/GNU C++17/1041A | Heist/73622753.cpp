#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   int n,a;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)cin>>a,v.push_back(a);
   a=0;
   sort(v.begin(),v.end());
   int temp=v[v.size()-1]-v[0]+1;
   cout<<temp-n<<endl;
   v.clear();
}