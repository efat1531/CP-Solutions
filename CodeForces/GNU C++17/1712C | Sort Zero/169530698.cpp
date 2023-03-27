#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
#define nl <<"\n";
 
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        if (is_sorted(arr, arr+n)==true) {
            cout<<0<<endl;
        } else {
            int ue[n];
            map<int, int>mp;
            map<int, int>mp2;
            for (int i = 0; i<n; i++) {
                mp[arr[i]]++;
                ue[i]=mp.size();
            }
            int p=0;
            mp2[arr[n-1]]=n-1;
            for (int i=n-2;i>=0;i--) {
                if (arr[i]>arr[i+1]) {
                    p=i;
                    break;
                } else {
                    mp2[arr[i]]=max(i,mp2[arr[i]]);
                }
            }
            int ans=ue[p];
            for(int i=0;i<=p;i++)
            {
                if(mp2[arr[i]]!=0)
                    ans=max(ue[mp2[arr[i]]],ans);
 
            }
            cout<<ans nl;
            
        }
    }
    return 0;
}