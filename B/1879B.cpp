#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long minA = *min_element(a.begin(), a.end());
    long long sumA = accumulate(a.begin(), a.end(), 0LL);
    
    long long minB = *min_element(b.begin(), b.end());
    long long sumB = accumulate(b.begin(), b.end(), 0LL);

    long long res = min(minA * n + sumB, minB * n + sumA);
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