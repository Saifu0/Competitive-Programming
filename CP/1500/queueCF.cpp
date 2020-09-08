// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include <bits/stdc++.h>
using namespace std;

#define NINJA                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define dloop(i, n) for (int i = n - 1; i >= 0; i--)
#define all(a) a.begin(), a.end()
#define iii tuple<int, int, int>
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define int long long
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int, int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 1e6 + 10;
int x[mxn], y[mxn];
int ans[mxn];
int p[mxn];

int32_t main()
{
    NINJA;

    map<int, int> m;

    int n;
    cin >> n;
    for1(i, n) cin >> x[i] >> y[i], m[x[i]]++, m[y[i]]++, p[x[i]] = y[i];

    int a, b = p[0];
    for (auto it : m)
    {
        if (it.S % 2 == 1)
        {
            for1(i, n) if (it.F == x[i])
            {
                a = x[i];
                break;
            }
        }
    }
    // cout << a << " " << b << endl;
    while (b)
    {
        cout << a << " " << b << " ";
        a = p[a];
        b = p[b];
    }
    if (a)
        cout << a;

    return 0;
}
