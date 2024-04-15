#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    
    long long s = 0, cnt_1 = 0;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
        if (a[i] == 1) cnt_1++;
    }

    if (s >= cnt_1 + n && n > 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    cout << "\n";
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}