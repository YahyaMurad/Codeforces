#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int res = INT_MAX;
    while (n--) {
        int d, s; cin >> d >> s;

        res = min(res, d + (s - 1) / 2);
    }

    cout << res;
    cout << "\n";
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}