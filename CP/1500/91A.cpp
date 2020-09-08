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

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vi a(n);
		fo(i, n) cin >> a[i];

		int j = 1;
		bool ok = 1;
		while (j < n - 1)
		{
			int i = j - 1;
			int mx1 = inf;
			int idx1 = i;
			while (i >= 0)
			{
				if (a[i] < mx1)
				{
					mx1 = a[i];
					idx1 = i;
				}
				i--;
			}
			int k = j + 1;
			int mx2 = inf;
			int idx2 = k;

			while (k < n)
			{
				if (a[k] < mx2)
				{
					mx2 = a[k];
					idx2 = k;
				}
				k++;
			}

			if (mx1 < a[j] && a[j] > mx2)
			{
				ok = 0;
				cout << "YES" << endl;
				cout << idx1 + 1 << " " << j + 1 << " " << idx2 + 1 << endl;
			}

			if (!ok)
				break;
			j++;
		}

		if (ok)
			cout << "NO" << endl;
	}

	return 0;
}