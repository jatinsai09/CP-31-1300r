#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << endl;
        }
        else {
            bool flag = true;
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    cout << n / i << " " << (n - (n / i)) << endl;
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << 1 << " " << n - 1 << endl;
            }
        }
    }
}