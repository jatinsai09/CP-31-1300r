#include<bits/stdc++.h>

using namespace std;

#define int long long int

int sum(int n) {
    return (n * (n + 1)) >> 1;
}

bool check(int mid, int k, int x) {
    int total = sum(min(mid, k));

    if (mid > k){
        total += sum(k - 1);
        int rem = (2 * k - 1) - mid;
        total -= sum(rem);
    }
    return total >= x;
}


int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;

        int l = 1, r = 2 * k - 1, res = 2 * k - 1, mid;

        while (l <= r) {
            mid = l + (r - l) / 2;
            if (check(mid, k, x)) {
                r = mid - 1;
                res = mid;
            }
            else {
                l = mid + 1;
            }
        }
        cout << res << "\n";
    }
}