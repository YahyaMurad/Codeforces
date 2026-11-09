#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    
    vector<int> v(n);
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }

    if (mx == mn) {
        printf("%lld\n", (1LL * n * (n - 1LL)));
        return;
    }

    int cntmx = 0, cntmn = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == mx) cntmx++;
        if (v[i] == mn) cntmn++;
    }

    printf("%lld\n", 2LL * cntmn * cntmx);
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}