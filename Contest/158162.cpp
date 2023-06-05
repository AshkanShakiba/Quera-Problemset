#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;

const int mod = 1e9 + 7;
const ll inf = 1e18;
const int maxn = 3e3 + 10;
const double eps = 1e-7;
const double pi = 3.14159265359;

int n, m;
int a[maxn];
int mark[maxn];
vector<int> g[maxn];
set<pair<int, int>> s;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            mark[j] = 0;
        }
        s.clear();
        mark[i] = 1;
        ll now = a[i];
        ll ans = 0;
        int cnt = 1;
        for (int x : g[i])
        {
            s.insert({a[x], x});
        }
        while (cnt < n)
        {
            auto b = s.begin();
            int cost = (*b).first;
            int id = (*b).second;
            if (now <= cost)
            {
                ans += cost - now + 1;
                now += cost - now + 1;
            }
            now += cost;
            s.erase(s.begin());
            mark[id] = 1;
            for (auto v : g[id])
            {
                if (mark[v] == 0)
                {
                    s.insert({a[v], v});
                }
            }
            cnt++;
        }
        cout << ans << " ";
    }
    cout << endl;
}
