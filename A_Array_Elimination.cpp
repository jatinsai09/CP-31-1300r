#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], res[33] = {
            0
        };
        for (auto & i: a) {
            cin >> i;
            for (int j = 0; j < 33; j++) {
                if (i & (1 << j)) res[j]++;
            }
        }

        vector < int > v;
        for (int k = 1; k <= n; k++) {
            bool yes = true;
            for (int j = 0; j < 33; j++) {
                if (res[j] % k) {
                    yes = false;
                    break;
                }
            }
            if (yes) v.push_back(k);
        }

        for (auto& i: v) {
            cout << i << " ";
        }
        cout << endl;
    }
}