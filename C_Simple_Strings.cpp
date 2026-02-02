#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 1; i < n - 1; i++) {
        if (s[i] == s[i - 1]) {
            s[i] = (s[i] == 'z') ? 'a' : s[i] + 1;
            if (s[i] == s[i + 1]) {
                s[i] = (s[i] == 'z') ? 'a' : s[i] + 1;
            }
        }
    }
    int i = n - 1;
    if (s[i - 1] == s[i]) s[i] = (s[i] == 'z') ? 'a' : s[i] + 1;
    cout << s;
}