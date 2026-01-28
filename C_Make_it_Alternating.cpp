#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    int mod = 998244353;
    cin >> t;
    while (t--) {
        int len = 1, mini = 0, res = 1;
        string a;
        cin >> a;
        int n = a.size();

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                len++;
            }
            else {
                mini += len - 1;
                res = ((res % mod) * (len % mod)) % mod;
                len = 1;
            }
        }
        if (len) {
            mini += len - 1;
            res = ((res % mod) * (len % mod)) % mod;
        }

        int fact = 1;
        for (int i = 1; i <= mini; i++) {
            fact = ((fact % mod) * (i % mod)) % mod;
        }

        res = ((res % mod) * (fact % mod)) % mod;
        cout << mini << " " << res << "\n";
    }
}