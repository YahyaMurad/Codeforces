#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <numeric>
#include <utility>
using namespace std;

#define all(x)     begin(x), end(x)
#define fora(a)    for (auto u : a)
#define forn(i, n) for (auto i = 0; i < n; i++)
#define umap       unordered_map
#define uset       unordered_set
#define pb         push_back
#define mk         make_pair
#define endl       "\n"

using ll  = long long;
using vi  = vector<int>;
using vll = vector<ll>;
using pi  = pair<int, int>;
using pll = pair<ll, ll>;

void solve() {
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    // int t; cin >> t;
    // while (t--) solve();
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int max_length = 0;
    int current_length = 1;
    int previous_length = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            current_length++;
        }
        else {
            max_length = max(max_length, min(current_length, previous_length) * 2);
            previous_length = current_length;
            current_length = 1;
        }
    }
    
    max_length = max(max_length, min(current_length, previous_length) * 2);
    cout << max_length << "\n";
    return 0;
}