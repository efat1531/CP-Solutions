// Problem: B. Three Sevens
// Contest: Codeforces - Codeforces Round 860 (Div. 2)
// URL: https://codeforces.com/contest/1798/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
// Problem: B. Stand-up Comedian
// Contest: Codeforces - Educational Codeforces Round 142 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1792/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
 
//________________________________________________________________________________________
//
//    BISMILLAHIR RAHMANIR RAHIM
//    TANVIR AHMED KHAN
//________________________________________________________________________________________
//
 
#include<bits/stdc++.h>
 
typedef  long long  ll;
const  ll    MOD  =  1e9 + 7;
const  ll    N =  2e5+7;
using namespace std;
 
//________________________________________________________________________________________
//
 
#define  pb    push_back
#define  endl            "\n"
#define  f               first
#define  s               second
#define  pi              2 * acos(0.0)
#define cy    cout << "Yes\n";
#define cn    cout << "No\n";
#define  FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define check(x) x?cout <<"YES\n":cout <<"NO\n";
 
//________________________________________________________________________________________
//
 
 
void solve(){
 
 int m; cin >> m;
 
 vector<vector<int> > v;
 
 map<int, int> mp;
 
 for(int l = 0; l< m ;l ++){
  
  int n; cin >> n;
  
  vector<int> temp;
  
  for(int i=0;i<n;i++){
   
   int t; cin >> t;
   mp[t]++;
   temp.pb(t);
  }
  
  v.push_back(temp);
  
  
 }
 
 
 vector<int> ans;
 for(int i=0;i<v.size();i++){
  
  bool f = false;
  
  for(int j=0;j<v[i].size();j++){
   
   if(mp[v[i][j]]==1 and f == false){
    f = true;
    ans.push_back(v[i][j]);
   }
   mp[v[i][j]]--;
   
   
  }
  if(f==false){
   cout << -1 << endl;
   return;
  }
  
 }
 for(auto u: ans) cout << u <<" ";
 cout << endl;
 
 
}
 
 
 
int main(){
 
 FAST
 
 /// With Test Case
 
 // int test_case, c = 0; cin >> test_case; while(test_case--) {cout <<"Case "<<++c<<": "; solve();}
 
 /// Without Test Case
 
 int test_case; cin >> test_case; while(test_case--) 
 
 solve();
 
 return 0;
}
 
//________________________________________________________________________________________
//
//    ALHAMDULILLAH
//________________________________________________________________________________________
//