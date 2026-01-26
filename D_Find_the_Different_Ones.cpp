#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n), nxt(n);
        for (auto & i: v) {
            cin >> i;
        }
        nxt[n - 1] = n;
        for (int i = n - 2; i >= 0; i--) {
            nxt[i] = v[i] == v[i + 1] ? nxt[i + 1] : i + 1;
        }

        int q, l, r;
        cin >> q;
        while (q--) {
            cin >> l >> r;
            l--;
            r--;
            if (nxt[l] <= r) {
                cout << l + 1 << " " << nxt[l] + 1 << endl;
            }
            else {
                cout << -1 << " " << -1 << endl;
            }

        }
        cout << endl;
    }
}