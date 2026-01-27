#include <bits/stdc++.h>

using namespace std;
#define int long long int
void getPrime(int n, map < int, int > & mp) {

    while (n % 2 == 0) {
        mp[2]++;
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i++) {
        while (n % i == 0) {
            mp[i]++;
            n /= i;
        }
    }

    if (n > 1) mp[n]++;
}
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        map < int, int > mp;

        for (auto & i: a) {
            cin >> i;
            getPrime(i, mp);
        }
        bool yes = true;

        for (auto& it: mp) {
            int f = it.second;
            if (f % n != 0) {
                yes = false;
                break;
            }
        }

        cout << (yes ? "Yes\n" : "No\n");
    }
    return 0;
}