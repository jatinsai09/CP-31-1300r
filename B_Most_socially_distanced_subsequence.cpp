#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n), res;
        for (auto & i: v) cin >> i;

        res.push_back(v[0]);
        if (n > 2) {
            for (int i = 1; i < n - 1; i++) {
                if (v[i] < v[i - 1] && v[i] < v[i + 1]) res.push_back(v[i]);
                else if (v[i] > v[i - 1] && v[i] > v[i + 1]) res.push_back(v[i]);
            }
        }
        res.push_back(v[n - 1]);

        cout << res.size() << "\n";
        for (auto& i: res) {
            cout << i << " ";
        }
        cout << "\n";
    }
}