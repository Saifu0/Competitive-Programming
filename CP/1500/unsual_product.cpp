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
    vi a(n);
    fo(i, n)
    {
        fo(j, n)
        {
            int x;
            cin >> x;
            if (i == j)
            {
                a[i] = x;
            }
        }
    }

    int sum = 0;
    fo(i, n)
    {
        sum = (sum + a[i]) % 2;
    }
    // cout << sum;

    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 3)
        {
            cout << sum;
        }
        else
        {
            int r;
            cin >> r;
            --r;
            if (a[r] == 1)
            {
                if (sum == 1)
                    sum = 0;
                else
                    sum = 1;
            }
            else
            {
                if (sum == 0)
                    sum = 1;
                else
                    sum = 0;
            }
            a[r] = !a[r];
        }
    }

    cout << endl;

    return 0;
}
