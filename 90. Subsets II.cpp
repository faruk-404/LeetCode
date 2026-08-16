// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define nf cout << '\n'
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// void f(int idx, int &n, vector<int> &nums, vector<vector<int>> &st,
//        vector<int> a) {
//     if (idx == n) {
//         return;
//     }
//     for (int i = idx; i < n; i++) {
//         vector<int> aa(nums.begin() + idx, nums.begin() + i);
//         st.push_back(aa);
//         f(i + 1, n, nums, st, a);
//     }
// }

// vector<vector<int>> subsetsWithDup(vector<int> &nums) {
//     int n = nums.size();
//     vector<vector<int>> st;
//     vector<vector<int>> ans;
//     vector<int> a;
//     int l = 0, r = 1;
//     f(0, n, nums, st, a);

//     for (auto i : st)
//         ans.push_back(i);
//     return ans;
// }

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (auto &i : a)
//         cin >> i;
//     vector<vector<int>> ans = subsetsWithDup(a);
//     for (auto i : ans) {
//         for (auto j : i)
//             cout << j << ' ';
//         cout << '\n';
//     }
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t = 1;
//     // cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define nf cout << '\n'
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()

// void f(int idx, set<vector<int>> &ans, vector<int> s, int n) {
//     if (idx == n) {
//         return;
//     }
//     for (int i = idx; i < n; i++) {

//         vector<int> aa(s.begin() + idx, s.begin() + i + 1);
//         ans.insert(aa);
//         f(i + 1, ans, s, n);
//     }
// }

// vector<vector<int>> subsetsWithDup(vector<int> &nums) {
//     int n = nums.size();
//     set<vector<int>> ans;
//     f(0, ans, nums, n);
//     vector<int> t;
//     vector<vector<int>> aaa;
//     aaa.push_back(t);
//     for (auto i : ans) {
//         aaa.push_back(i);
//     }
//     return aaa;
// }

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (auto &i : a)
//         cin >> i;
//     vector<vector<int>> aaa = subsetsWithDup(a);
//     for (auto i : aaa) {
//         for (auto j : i)
//             cout << j << ' ';
//         cout << '\n';
//     }
// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t = 1;
//     // cin>>t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int skipDuplicates(int next, vector<int> &nums) {
    if (next == nums.size() || nums[next] != nums[next - 1])
        return next;
    return skipDuplicates(next + 1, nums);
}
void genSubsets(vector<vector<int>> &ans, vector<int> &subs, int currIdx,
                vector<int> &nums) {
    if (currIdx == nums.size()) {
        ans.push_back(subs);
        return;
    }
    subs.push_back(nums[currIdx]);
    genSubsets(ans, subs, currIdx + 1, nums);
    subs.pop_back();
    int next = currIdx + 1;
    if (next < nums.size() && nums[currIdx] == nums[next]) {
        // skip all the duplicates
        next = skipDuplicates(next, nums);
    }
    genSubsets(ans, subs, next, nums);
}
vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> subs;
    genSubsets(ans, subs, 0, nums);
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<vector<int>> aaa = subsetsWithDup(a);
    for (auto i : aaa) {
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
