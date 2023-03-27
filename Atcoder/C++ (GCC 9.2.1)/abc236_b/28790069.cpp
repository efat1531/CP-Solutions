#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int sz = 1e5+10;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n; cin >> n;
  int b=(n*4)+1;
    int a[b];
    int cnt[b] = {0};
    int N = 4*n;
    for (int i = 1; i < N; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (int i = 1; i <= n; i++){
        if (cnt[i] == 3) {
            cout << i << '\n';
            break;
        }
    }
    
    return 0;
}