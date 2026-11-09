#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string res = "";
    int i = s.size();

    while (!s.empty()) {
        int x;
		if (s.back() == 'a' || s.back() == 'e') {
            x = 2;
        }
        else {
            x = 3;
        }

        while (x--) {
            res += s.back();
            s.pop_back();
        }

        res += ".";
    }
	res.pop_back();
	reverse(res.begin(), res.end());
    cout << res << "\n";
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}