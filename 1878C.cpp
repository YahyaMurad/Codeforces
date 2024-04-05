#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n, x, k;
  cin >> n >> x >> k;
  if (2 * k >= x * (x + 1) && 2 * k <= n * (n + 1) - (n - x) * (n - x + 1))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif

  int t;
  cin >> t;
  while (t--) solve();
}
