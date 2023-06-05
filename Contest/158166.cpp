#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;

const int mod = 1e9 + 7;
const ll inf = 1e18;
const int maxn = 1e5 + 10;
const double eps = 1e-7;
const double pi = 3.14159265359;

int t;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << std::fixed;
    cin >> t;
    while (t--)
    {
        double x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2)
        {
            cout << std::setprecision(6) << double(abs(y1 - y2)) << endl;
        }
        else if (y1 == y2)
        {
            cout << std::setprecision(6) << double(abs(x1 - x2)) << endl;
        }
        else
        {
            double z1 = abs(x1 + y1);
            double z2 = abs(x2 + y2);
            cout << std::setprecision(6) << abs(z1 - z2) + (min(z1, z2) * pi * 0.5) << endl;
        }
    }
}
