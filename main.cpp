#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long
#define double long double
using namespace std;
using namespace __gnu_pbds;
long dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
long dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int Mod = (int)676767677;
double logBase(int a, int b) { return (double)log2l(a) / log2l(b); }
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

// int inv(int a, int mod) { return a <= 1 ? a : mod - (int)(mod / a) * inv(mod % a, mod) % mod; }
int pmod(int x, int p, int mod)
{
    int ans = 1;
    int pre = x % mod;
    while (p)
    {
        if (p % 2)
            ans *= (pre) % mod;
        p /= 2;
        ans %= mod;
        pre = (pre * pre) % mod;
    }
    return ans;
}
int inv(int a, int mod) { return pmod(a, mod - 2, mod); }
void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("odometer.in", "r", stdin);
    freopen("odometer.out", "w", stdout);

#endif
}
/////ost.order_of_key (k) : number of items strictly smaller than k .
//// ost.find_by_order(k) : K-th element in a set (counting from zero).
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 1.5 * (1e7) + 100;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // fileIO();
    int Test_cases = 1;
    // cin >> Test_cases;
    while (Test_cases--)
    {
        int n, k;
        cin >> n >> k;
        int T[n], A[n];
        for (auto &it : T)
        {

            cin >> it;
        }
        for (auto &it : A)
        {
            cin >> it;
        }
        int pre[n + 1] = {};
        int Ans[n + 1] = {};
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            pre[i + 1] = pre[i] + ((T[i] == 1) ? A[i] : -A[i]);
        }
        ordered_multiset<int> mst;

        int q;
        cin >> q;
        vector<array<int, 3>> Q;
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            Q.push_back({l, r, i});
        }
        sort(Q.begin(), Q.end());
        int idx = 1;
        int idx2 = 1;
        int ans = 0;
        for (int i = 0; i < q; i++)
        {
            // cout << Q[i][0] << endl;
            int num = pre[Q[i][1]] - pre[Q[i][0] - 1];

            while (idx < Q[i][0])
            {
                mst.erase(pre[idx]);
                idx++;
            }
            while (idx2 <= Q[i][1])
            {
                mst.insert(pre[idx2]);
                idx2++;
            }
            cout << num << endl;
            cout << Q[i][2] << ' ' << mst.order_of_key(num - k) << endl;
        }
    }
    return 0;
}