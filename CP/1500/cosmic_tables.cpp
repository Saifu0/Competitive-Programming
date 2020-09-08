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

const int mxn = 1010;
int x[mxn][mxn];
int row[mxn], col[mxn];

int32_t main()
{
    NINJA;

    int n, m, q;
    cin >> n >> m >> q;
    for1(i, n) for1(j, m) cin >> x[i][j];

    for1(i, max(n, m)) row[i] = col[i] = i;

    while (q--)
    {
        char c;
        cin >> c;
        int a, b;
        cin >> a >> b;
        if (c == 'r')
            swap(row[a], row[b]);
        else if (c == 'c')
            swap(col[a], col[b]);
        else
        {
            cout << x[row[a]][col[b]] << endl;
        }
    }

    return 0;
}