#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, m;
        cin >> n >> x >> m;
        int l, r, a = x, b = x;

        while (m--) {
            cin >> l >> r;
            if (r >= a) {
                a = min(l, a);
            }
            if (l <= b) {
                b = max(r, b);
            }
        }
        cout << b - a + 1 << "\n";
    }
}