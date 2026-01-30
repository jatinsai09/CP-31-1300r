#include <bits/stdc++.h>

using namespace std;
#define int long long int
const int mod = 1e9 + 7;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < pair < int, int >> vp(n);
        for (int i = 0; i < n; i++) {
            int got = 0, x, s;
            cin >> s;
            for (int i = 0; i < s; i++) {
                cin >> x;
                got = max(got, x - i + 1);
            }
            vp[i] = {
                got,
                s
            };
        }
        sort(begin(vp), end(vp));

        int res = 0, hv = 0;
        for (int i = 0; i < n; i++) {
            res = max(res, vp[i].first - hv);
            hv += vp[i].second;
        }
        cout << res << "\n";
    }
    // your code goes here
}