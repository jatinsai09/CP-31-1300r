#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    unordered_map < int, int > mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int res = 0, mx = 0;
    for (int i = 0, j = 0; j < n;) {
        if (mp[a[i]] == 0) {
            i++;
        } else {
            if (a[i] == b[j]) {
                i++;
            } else {
                res++;
            }
            mp[b[j]]--;
            j++;
        }
    }
    cout << res;
}