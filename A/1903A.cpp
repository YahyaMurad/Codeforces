#include <bits/stdc++.h>
using namespace std;

int main() {
    # ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
    # endif

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for (auto& x: v) {
            cin >> x;
        }

        if (is_sorted(v.begin(), v.end())) {
            cout << "YES\n";
            continue;
        }

        if (k == 1) cout << "NO\n";
        else cout << "YES\n";
    }
}