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

const int mxn = 1e5 + 10;
bool prime[mxn];
vi store;

void sieve()
{
    fo(i, mxn) prime[i] = 1;

    for (int i = 2; i * i <= mxn; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j < mxn; j += i)
                prime[j] = 0;
        }
    }
    prime[0] = prime[1] = 0;

    Fo(i, 2, mxn) if (prime[i]) store.pb(i);
}

int32_t main()
{
    NINJA;

    sieve();

    int n;
    cin >> n;
    vi ans;
    for (int each : store)
    {
        while (n >= each)
        {
            ans.pb(each);
            n -= each;
        }
        if (n != 0)
        {
            ans.pop_back();
            n += each;
        }
    }

    cout << sz(ans) << endl;
    for (int each : ans)
        cout << each << " ";
    cout << endl;

    return 0;
}
