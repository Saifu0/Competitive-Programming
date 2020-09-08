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
	vector<pair<string, string>> a(n);
	vi c(n);
	fo(i, n) cin >> c[i];

	fo(i, n)
	{
		string s;
		cin >> s;
		a[i].F = s;
		reverse(all(s));
		a[i].S = s;
	}

	int best[2];
	best[0] = 0;
	best[1] = c[0];

	int ans[2];

	Fo(i, 1, n)
	{
		int temp[2];
		temp[0] = inf, temp[1] = inf;
		if (a[i].F >= a[i - 1].F)
			temp[0] = min(temp[0], best[0]);
		if (a[i].S >= a[i - 1].F)
			temp[1] = min(temp[1], best[0] + c[i]);
		if (a[i].F >= a[i - 1].S)
			temp[0] = min(temp[0], best[1]);
		if (a[i].S >= a[i - 1].S)
			temp[1] = min(temp[1], best[1] + c[i]);
		best[0] = temp[0];
		best[1] = temp[1];
	}

	if (best[0] == inf && best[1] == inf)
		cout << -1 << endl;
	else
		cout << min(best[0], best[1]) << endl;

	return 0;
}
