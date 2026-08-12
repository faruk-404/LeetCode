#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
bool pal(string s, int l, int r) {
    while (l <= r) {
        if (s[l++] != s[r--]) {
            return false;
        }
    }
    return true;
}
void f(int idx, vector<vector<string>> &ans, vector<string> &a, string s,
       int n) {
    if (idx == n) {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < n; i++) {
        if (pal(s, idx, i)) {
            a.push_back(s.substr(idx, i - idx + 1));
            f(i + 1, ans, a, s, n);
            a.pop_back();
        }
    }
}

void solve() {
    string s;
    cin >> s;

    vector<vector<string>> ans;
    vector<string> a;
    int n = s.size();
    f(0, ans, a, s, n);
    for (auto i : ans) {
        for (auto j : i)
            cout << j << ' ';
        cout << '\n';
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}