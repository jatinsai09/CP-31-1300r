#include<bits/stdc++.h>

using namespace std;
bool check(int mid, vector < int > a, int h) {
    int left = h, i;
    sort(a.begin(), a.begin() + mid + 1, greater < int > ());

    for (i = 0; i <= mid; i++) {
        if (a[i] > left) {
            break;
        }
        if (i & 1) {
            left -= a[i - 1];
        }
    }
    return i > mid;
}

int main() {
    int n, h;
    cin >> n >> h;
    vector < int > a(n);
    for (auto & i: a) cin >> i;

    int mid, l = 0, r = n - 1, res = 0;

    while (l <= r) {
        mid = (l + r) >> 1;
        if (check(mid, a, h)) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    cout << r + 1;
}