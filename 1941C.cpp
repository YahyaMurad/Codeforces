#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    int c = 0;            
	for (string sul : {"mapie", "pie", "map"}) {
		for (size_t pos = 0; (pos = s.find(sul, pos)) != string::npos;) {
			s[pos + sul.length() / 2] = '?';
            c++;
		}
	}
    cout << c;
    cout << "\n";
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}