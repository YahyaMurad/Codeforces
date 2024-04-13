#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    int l = 1;
    int r = 1;
    while (r < n) {
        if (n % r != 0) {
            cout << r - 1 << "\n";
            return;
        }
        r++;
    }

    cout << r << "\n";
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}