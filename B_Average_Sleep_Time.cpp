#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int n, k;
    cin >> n >> k;
    long double a[n];
    for (auto & i: a) cin >> i;

    int sum = 0;
    long double res = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }
    res += sum;
    for (int i = k; i < n; i++) {
        sum -= a[i - k];
        sum += a[i];
        res += sum;
    }
    res = res / (long double)(n - k + 1);
    printf("%.10Lf", res);
}