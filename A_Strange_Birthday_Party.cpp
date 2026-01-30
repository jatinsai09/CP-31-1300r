#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int k[n], c[m];
        for (auto & i: k) cin >> i;
        for (auto & i: c) cin >> i;
        sort(k, k + n);

        int j = 0, res = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (j < k[i] - 1) {
                res += c[j++];
            }
            else {
                res += c[k[i] - 1];
            }
        }
        cout << res << endl;
    }
}