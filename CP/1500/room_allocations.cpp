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
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

bool cmp(ii x, ii y){
	return x.S < y.S;
}

int32_t main(){
	NINJA;

	int n; cin >> n;

	multiset<pair<pair<int,int>,int>> q;
	fo(i,n){
		int x,y;
		cin >> x >> y;
		q.insert({{x,y},i});
	}
	int k= 0;
	priority_queue<ii,vector<ii>,greater<ii>> pq;
	vi ans(n);
	for(auto i=q.begin();i!=q.end();i++){
		int a = i->F.F;
		int b = i->F.S;
		int c;
		if(pq.empty() || pq.top().F >= a){
			c = ++k;
		}else{
			c = pq.top().S;
			pq.pop();
		}
		pq.push({b,c});
		ans[i->S] = c;
	}
	cout << k << endl;
	for(int i : ans) cout << i << " ";

	// priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
	// fo(i,n){
	// 	int x,y; cin >> x >> y;
	// 	q.push({y,{x,i}});
	// }
	// vii ans;
	// int c = 1;
	// while(!q.empty()){
	// 	ii t = q.top().S;
	// 	int start = q.top().F;
	// 	q.pop();
	// 	ans.pb({t.S,c});
	// 	vector<pair<int,pair<int,int>>> a;
	// 	while(!q.empty()){
	// 		ii tt = q.top().S;
	// 		int new_start = q.top().F;
	// 		q.pop();
	// 		if(tt.F > start){
	// 			ans.pb({tt.S,c});
	// 			start = new_start;
	// 			continue;
	// 		}else{
	// 			a.pb({new_start,{tt}});
	// 		}
	// 	}
	// 	for(auto each : a) q.push(each);
	// 	c++;
	// }
	// cout << c-1 << endl;
	// sort(ans.begin(), ans.end());
	// for(auto i : ans) cout << i.S << " ";
	// cout << endl;

	
	
	return 0;
}