#include <bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], sum = 0;
        map < int, int > mp;
        
        mp[0]++;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i & 1) sum -= a[i];
            else sum += a[i];

            if (mp[sum]) flag = true;
            mp[sum]++;
        }
        if (flag) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}