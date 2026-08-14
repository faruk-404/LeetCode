#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
void f(int &l, int &r, int &n, vector<int> &nums, set<vector<int>> &st,
       vector<int> a) {
        if(r==n){l++;return;}
        for(int i=l;i<r;i)


}

vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    int n = nums.size();
    set<vector<int>> st;
    vector<vector<int>> ans;
    vector<int> a;
    int l=0,r=1;
    f(l,r, n, nums, st, a);

    for (auto i : st)
        ans.push_back(i);
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<vector<int>> ans = subsetsWithDup(a);
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}