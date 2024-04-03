#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n + 1);
    vector<int> prefix(n + 1);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
        prefix[i] = prefix[i - 1];
        prefix[i] += a[i];

    }

    while (q--) {
        int l, r, k; cin >> l >> r >> k;

        int ans = prefix[n] - (prefix[r] - prefix[l - 1]) + k * (r - l + 1);
        cout << ((ans % 2 == 0) ? "NO\n" : "YES\n"); 
    }

}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}