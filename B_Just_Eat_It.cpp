#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (auto & i: a) cin >> i;

        int l = 0, r = 0;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            l += a[i];
            r += a[n - i - 1];
            if (l <= 0 || r <= 0) {
                flag = false;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}