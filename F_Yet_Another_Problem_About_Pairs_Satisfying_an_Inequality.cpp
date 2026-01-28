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
        vector < int > v;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < i + 1) {
                v.push_back(i + 1);
            }
        }   

        int res = 0;
        for (auto& i: v) {
            res += lower_bound(begin(v), end(v), a[i - 1]) - v.begin();
        }
        cout << res << endl;
    }
}