#include<bits/stdc++.h>
#define ll long long 
 
using namespace std;
 
int main()
{
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        bool f = true;
        if(s.size() % 2) {
            cout<<"No"<<endl;
        }
        else{
            int x = s.size() / 2;
            for(int i=0, j=x; i<x; i++, j++) {
                if(s[i] != s[j]) {
                    cout<<"No"<<endl;
                    f = false;
                    break;
                }
            }
            if(f) cout<<"Yes"<<endl;
        }
    }
}