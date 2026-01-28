#include<bits/stdc++.h>

using namespace std;
void solve() {
    int n;
    cin >> n;
    vector < vector < int >> v(n);
    unordered_map < int, int > mp;

    for (int i = 0; i < n; i++) {
        int bits, x;
        cin >> bits;
        while (bits--) {
            cin >> x;
            v[i].push_back(x);
            mp[x]++;
        }
    }

    for (auto& bits: v) {
        bool yes = true;
        for (auto& bit: bits) {
            if (mp[bit] == 1) {
                yes = false;
                break;
            }
        }
        if (yes) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}