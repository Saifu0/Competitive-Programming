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

    string s;
    cin >> s;
    int n = sz(s);
    int i = 0;
    int cnta = 0, cntb = 0, cntc = 0;

    while (i < n && s[i] == 'a')
        cnta++, i++;
    while (i < n && s[i] == 'b')
        cntb++, i++;
    while (i < n && s[i] == 'c')
        cntc++, i++;

    if (cnta == 0 || cntb == 0 || cntc == 0 || i != n)
    {
        cout << "NO" << endl;
        return 0;
    }

    if (cntc == cnta || cntc == cntb)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}