#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, f, a, b; cin >> n >> f >> a >> b;
    vector<long long> m(n + 1);
    m[0] = 0;
    for (int i = 1; i <= n; i++) cin >> m[i];

    for (int i = 1; i < n + 1; i++) {
        int res = min((m[i] - m[i - 1]) * a, b);
        f -= res;
    }
    cout << (f > 0 ? "YES" : "NO");

    cout << "\n";
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}