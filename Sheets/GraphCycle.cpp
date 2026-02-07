// #include <bits/stdc++.h>
// using namespace std;
// vector<int> color;
// vector<vector<int>> v;
// vector<int> par;
// vector<vector<int>> cycles;
// void dfs(int f, int c)
// {
//     if (color[c] == 2)
//     {
//         return;
//     }
//     if (color[c] == 1)
//     {
//         int cur = f;
//         vector<int> v2;
//         while (c != cur)
//         {
//             v2.push_back(cur);
//             cur = par[cur];
//         }
//         v2.push_back(c);
//         cycles.push_back(v2);
//         return;
//     }
//     par[c] = f;
//     color[c] = 1;
//     for (int i = 0; i < v[c].size(); i++)
//     {
//         if (f == v[c][i])
//         {
//             continue;
//         }
//         dfs(c, v[c][i]);
//     }
//     color[c] = 2;
//     return;
// }
// int main()
// {
// for (int i = 0; i < n; i++)
//         {
//             if (color[i] == 2)
//             {
//                 continue;
//             }

//             dfs(-1, i);
//         }
//     set<int> st;
//     for (int i = 0; i < cycles.size(); i++)
//     {
//         for (auto it : cycles[i])
//         {
//             st.insert(it);
//         }
//     }
//     cout << (int)st.size() << endl;
// }