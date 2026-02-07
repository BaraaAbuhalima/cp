#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long
#define double long double
using namespace std;
using namespace __gnu_pbds;
int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int Mod = 1e9 + 7;
double logbase(int a, int b) { return (double)log2l(a) / log2l(b); }
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
// int  inv(int  a, int  mod) { return a <= 1 ? a : mod - (int)(mod / a) * inv(mod % a, mod) % mod; }
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
    freopen("guard.in", "r", stdin);
    freopen("guard.out", "w", stdout);

#endif
}
/////ost.order_of_key (k) : Number of items strictly smaller than k .
//// ost.find_by_order(k) : K-th element in a set (counting from zero).
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int abss(int a, int b)
{
    return max(a - b, b - a);
}
int fun()
{

    // fileIO();
    int Test_cases = 1;
    // cin >> Test_cases;

    while (Test_cases--)
    {
        int n;
        cin >> n;
        int A[n];
        int pre[n + 1];
        pre[0] = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> A[i];
            pre[i + 1] = pre[i] ^ A[i];
        }

        vector<vector<int>> trie(1, {-1, -1});
        const int si = 21;
        for (int i = 1; i < n; i++)
        {
            int nex = 0;
            for (int j = si; j >= 0; j--)
            {
                int num = ((1 << j) & pre[i]) && 1;
                if (trie[nex][num] == -1)
                {
                    trie[nex][num] = trie.size();
                    trie.push_back({-1, -1});
                }
                nex = trie[nex][num];
            }
        }
        for (int i = 0; i < n; i++)
        {
            int nex = 0;
            int ans = 0;
            for (int j = si; j >= 0; j--)
            {
                int num = ((1 << j) & i) && 1;
                num = !num;
                if (trie[nex][num] == -1)
                {
                    num = !num;
                }
                ans += num * (1 << j);
                nex = trie[nex][num];
            }
            ans ^= i;
            bool f = ans < n;
            if (f)
            {

                cout << i << ' ';
                for (int j = 1; j < n; j++)
                {
                    cout << (pre[j] ^ i) << ' ';
                }
                cout << endl;
                break;
            }
        }
    }
    return 0;
}