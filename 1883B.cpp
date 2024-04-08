#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    unordered_map<char, int> charCount;

    for (char c : s) charCount[c]++;

    int oddCount = 0;
    for (const auto& pair : charCount) if (pair.second % 2 != 0) oddCount++;
    
    cout << (oddCount <= k + 1 ? "YES" : "NO");

    cout << "\n";
}

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif

    int t; cin >> t;
    while (t--) solve();
}