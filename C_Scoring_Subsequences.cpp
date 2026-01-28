#include<bits/stdc++.h>'

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n + 1), res(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        for (int i = 1; i <= n; i++) {
            int l = 1, h = i, mid, ind = 1;
            while (l <= h) {
                mid = (h + l) / 2;
                int val = v[mid] / (i - mid + 1);
                if (val) {
                    ind = mid;
                    h = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            res[i] = i - ind + 1;
        }

        for (int i = 1; i <= n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}