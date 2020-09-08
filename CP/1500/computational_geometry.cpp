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

typedef complex<ld> Point;
#define X real()
#define Y imag()

int32_t main()
{
    NINJA;

    Point p = {4, 2};
    cout << p.X << " " << p.Y << endl; // x + iy

    Point a = {4, 2};
    Point b = {3, -1};

    cout << abs(a - b) << endl; // sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))

    b = {1, 2};
    cout << (conj(a) * b).Y << endl; // a cross product b

    return 0;
}