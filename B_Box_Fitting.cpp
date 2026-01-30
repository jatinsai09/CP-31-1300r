#include<bits/stdc++.h>

using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, w, x;
        cin >> n >> w;

        multiset < int > ms;
        for (int i = 0; i < n; i++) {
            cin >> x;
            ms.insert(x);
        }
        int h = 1, left = w;
        while (!ms.empty()) {
            auto itr = ms.upper_bound(left);
            if (itr == ms.begin()) {
                left = w;
                h++;
            }
            else {
                itr--;
                int val = * itr;
                left -= val;
                ms.erase(itr);
            }
        }
        cout << h << endl;

    }
}