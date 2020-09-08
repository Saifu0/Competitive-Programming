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

int32_t main()
{
    NINJA;

    int n;
    cin >> n;
    int f = 0, s = 0, t = 0;

    ii a[3];
    int sum = 0;
    fo(i, 3)
    {
        int x, y;
        cin >> x >> y;
        a[i].F = x;
        a[i].S = y;
        if (i == 0)
            f = x;
        if (i == 1)
            s = x;
        if (i == 2)
            t = x;
        sum += x;
    }

    while (f < a[0].S && sum < n)
    {
        f++;
        sum++;
    }

    while (s < a[1].S && sum < n)
    {
        s++;
        sum++;
    }

    while (t < a[2].S && sum < n)
    {
        t++;
        sum++;
    }

    cout << f << " " << s << " " << t << endl;

    return 0;
}