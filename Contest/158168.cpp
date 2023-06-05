#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;

const int mod = 1e9 + 7;
const ll inf = 1e18;
const int maxn = 1e5 + 10;
const double eps = 1e-7;
const double pi = 3.14159265359;

string a[maxn];

void revert(int id, int x)
{
    for (int i = 0; i <= x; i++)
    {
        if (a[id][i] == '0')
        {
            a[id][i] = '1';
        }
        else
        {
            a[id][i] = '0';
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = m - 1; i >= 0; i--)
        {
            ll cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j][i] == '1')
                {
                    cnt++;
                }
            }
            if (cnt > n / 2)
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[j][i] == '0')
                    {
                        revert(j, i);
                        ans++;
                    }
                }
            }
            else
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[j][i] == '1')
                    {
                        revert(j, i);
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}
