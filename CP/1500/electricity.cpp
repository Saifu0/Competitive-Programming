// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

int32_t main(){
	NINJA;

	int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	for1(i,12) months[i] += months[i-1];

	vi years;

	for(int i=1900;i<=2100;i++){
		if((i%4==0 && i%100 != 0) || i%400==0) years.pb(366);
		else years.pb(365);
	}

	for1(i,sz(years)-1){
		years[i] += years[i-1];
	}

	int n; 
	cin >> n;
	while(n > 0){
		vector<pair<int,int>> a;

		fo(i,n){
			int day,mon,yr,c;
			cin >> day >> mon >> yr >> c;
			int ans = day;
			if(mon > 1){
				ans += months[mon-2];
			}
			if((mon <= 2 && ((yr%4==0 && yr%100!=0) || yr%400==0))) ans -= 1;
			ans += years[yr-1900];
			// cout << years[yr-1900] << " ";
			a.pb({ans,c});
		}

		int cnt = 0, sum = 0;

		bool ok = 0;

		// for(auto i : a) cout << i.F << " " << i.S << endl;
		int c = 0;
		for1(i,n-1){
			if(a[i].F - a[i-1].F == 1){
				c++;
				sum += abs(a[i].S - a[i-1].S);
			}else{
				if(c > 0) cnt += c;
				c = 0;
			}
		}

		if(c > 0) cnt += c;

		cout << cnt << " " << sum << endl;

		cin >> n;
	}
	
	return 0;
}