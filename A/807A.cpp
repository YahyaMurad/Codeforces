#include <bits/stdc++.h>
using namespace std;

int main() {
    # ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    # endif
    
    int n; cin >> n;
    vector<vector<int>> res(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> res[i][0] >> res[i][1];
        if (res[i][0] != res[i][1]) {
            cout << "rated";
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (res[i][0] > res[j][0]) {
                cout << "unrated";
                return 0;
            }
        }
    }

    cout << "maybe";
    return 0;
}