#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int c = 0, r1, r2;
        map < pair < int, int > , int > mp;

        for (int i = 0; i < n; i++) {
            r1 = a[i] % x;
            r2 = a[i] % y;

            if (r1 != 0) r1 = x - r1;

            if (mp.find({
                    r1,
                    r2
                }) != mp.end()) {
                c += mp[{
                    r1,
                    r2
                }];
            }
            mp[{
                a[i] % x,
                a[i] % y
            }]++;
        }
        cout << c << endl;
    }
}