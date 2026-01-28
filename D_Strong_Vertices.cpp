#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n], res[n];

        for (auto & i: a) cin >> i;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            res[i] = a[i] - b[i];
            maxi = max(maxi, res[i]);
        }

        int c = 0;
        vector < int > v;
        for (int i = 0; i < n; i++) {
            if (res[i] == maxi) {
                c++;
                v.push_back(i + 1);
            }
        }

        cout << c << endl;
        for (auto i: v) {
            cout << i << " ";
        }
        cout << endl;
    }
}