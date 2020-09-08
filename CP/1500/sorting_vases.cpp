#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
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

void find_subs(vii &mm, vector<vii>&subs, vii&one, int index){
	subs.pb(one);
	for(int i=index;i<mm.size();i++){
		one.pb(mm[i]);
		find_subs(mm,subs,one,i+1);
		one.pop_back();
	}
	return;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int b[n+10];
		fo(i,n) cin >> b[i];

		vii mm(m);
		fo(i,m){
			cin >> mm[i].F >> mm[i].S;
		}

		vii one;
		vector<vii> subs ;
		find_subs(mm,subs,one,0);

		int mn = inf;

		for(int i=0;i<subs.size();i++){
			//int cnt=0;
			int a[n+10];
			fo(i,n){
				a[i] = b[i];
			}
			for(int j=0;j<subs[i].size();j++){
				int x = subs[i][j].F, y = subs[i][j].S;
				--x,--y;
				swap(a[x],a[y]);
			}
			vector<bool> vis(n+10,false);

			ii s[n];
			fo(i,n){
				s[i].F = a[i];
				s[i].S = i;
			}

			sort(s, s+n);
			int ans = 0;

			fo(i,n){
				if(vis[i] || s[i].S==i) continue;
				int cnt=0;
				int j=i;
				while(!vis[j]){
					vis[j] = 1;
					j = s[j].S;
					cnt++;
				}
				//cout << cnt << endl;
				if(cnt>0) ans += (cnt-1);
			}
			if(mn>ans){
				mn = ans;
			}
		}
		cout << mn << endl;

	}
	
	return 0;
}