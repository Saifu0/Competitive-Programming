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
    vii a, b;
    fo(i, n)
    {
        int x, y;
        cin >> x >> y;
        a.pb({x, y});
    }

    fo(i, n)
    {
        int x, y;
        cin >> x >> y;
        b.pb({x, y});
    }

    vector<set<ii>> s;

    fo(i, n)
    {
        set<ii> st;
        fo(j, n)
        {
            st.insert({a[i].F + b[j].F, a[i].S + b[j].S});
        }
        s.pb(st);
    }

    for (ii i : s[0])
    {
        // cout << i.F << " " << i.S << endl;
        bool ok = 1;
        Fo(j, 1, n)
        {
            ok = ok && (s[j].find(i) != s[j].end());
        }
        if (ok)
        {
            cout << i.F << " " << i.S << endl;
            break;
        }
    }

    return 0;
}
