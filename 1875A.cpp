#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, n; cin >> a >> b >> n;
	long long ans = b;

	for (int i = 0, x = 0; i < n; i ++){
		cin >> x;
		ans += min(a - 1, x);
	}
	printf("%lld\n", ans);
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}