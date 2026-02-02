#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    string s;
    cin >> s;
    int n = s.size();
    int ow = 0, wow = 0, w = 0;
    
    for (int i = 1; i < n; i++) {
        if (s[i] == 'v' && s[i - 1] == 'v') {
            w++;
            wow += ow;
        } else if (s[i] == 'o') {
            ow += w;
        }
    }

    cout << wow << "\n";
}