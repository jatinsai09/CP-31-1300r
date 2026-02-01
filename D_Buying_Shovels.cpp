#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int mini = INT_MAX;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i <= k) mini = min(mini, n / i);
                if (n / i <= k) mini = min(mini, i);
            }
        }
        cout << mini << endl;
    }
}