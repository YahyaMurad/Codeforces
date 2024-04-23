#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    int x, y; cin >> x >> y;
    
    string ans = "YES";

    for (int i = 0; i < k; ++i) {
        int xx, yy; cin >> xx >> yy;
        
        if ((x + y) % 2 == (xx + yy) % 2) {
            ans = "NO";
        }
    }
    
    cout << ans;
    cout << "\n";
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}