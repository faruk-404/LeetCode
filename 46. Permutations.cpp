#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    ans.push_back(nums);
    while (next_permutation(nums.begin(), nums.end())) {
        ans.push_back(nums);
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
    vector<vector<int>> ans = permute(arr);

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
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
} // #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define nf cout<<'\n'
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
// void f(vector<int>& nums,vector<vector<int>> &ans,vector<int>&a,vector<bool>
// &freq,int n){
//     if(a.size()==n){
//         ans.push_back(a);
//         return;
//     }

//     for(int i=0;i<n;i++){
//         if(freq[i])continue;
//         a.push_back(nums[i]);
//         freq[i]=true;
//         f(nums,ans,a,freq,n);
//         freq[i]=false;
//         a.pop_back();

//     }

// }

// vector<vector<int>> permute(vector<int>& nums) {
//     int n=nums.size();
//     vector<vector<int> > ans;
//     vector<int> a;
//     vector<bool> freq(n,false);

//     f(nums,ans,a,freq,n);
//     return ans;
// }

// void solve(){
//     int n;cin>>n;
//     vector<int> arr(n);
//     for(auto &i:arr)cin>>i;

//     vector<vector<int> > ans=permute(arr);

//     for(auto i:ans){
//         for(auto j:i)cout<<j<<' ';
//         cout<<'\n';
//     }

// }
// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t=1;
//     // cin>>t;
//     while(t--){solve();}
//     return 0;
// }