#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, res = 0;
        int x;
        cin >> n >> k;
        map < int, int > mp;

        for (int i = 0; i < n; i++) {
            cin >> x;
            for (int j = 0; j < 31; j++) {
                if (x & (1 << j)) mp[j]++;
            }
        }

        int c;
        for (int i = 30; i >= 0; i--) {
            c = n - mp[i];
            if (c <= k) {
                k -= c;
                res += pow(2, i);
            }
        }
        cout << res << endl;
    }
}