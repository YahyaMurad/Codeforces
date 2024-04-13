#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c; cin >> a >> b >> c;

    vector<int> nums = {a, b, c};
    sort(nums.begin(), nums.end());
    a = nums[0];
    b = nums[1];
    c = nums[2];

    if (a == b && b == c) {
        cout << "YES";
    }
    else if (b % a == 0 && c % a == 0 && floor(b / a) - 1 + floor(c / a) - 1 <= 3) {
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