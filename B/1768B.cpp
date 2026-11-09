#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    int cnt = 1;
    for (int i = 0; i < n; i++) {
        if (p[i] == cnt) cnt++;
    }
    
    cout << (n  - cnt + k) / k;
    cout << "\n";
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}