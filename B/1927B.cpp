#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    string res;
    vector<int> cnt(26, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 26; j++) {
            if (cnt[j] == a[i]) {
                cnt[j] += 1;
                res += static_cast<char>(97 + j);
                break;
            }
        }
    }

    cout << res << "\n";

}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while (t--) solve();
}