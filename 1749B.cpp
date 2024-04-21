#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n), b(n);

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    long long sumA = 0, sumB = 0;
    for (int i = 0; i < n; ++i) {
        sumA += a[i];
        sumB += b[i];
    }

    long long maxB = *max_element(b.begin(), b.end());
    cout << sumA + sumB - maxB;
    cout << "\n";
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}