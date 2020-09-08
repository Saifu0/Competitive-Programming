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

int32_t main(){
	NINJA;
		
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vi a(n,0);

		priority_queue<pair<int,ii>> q;
		q.push({n,{0,n-1}});

		int cnt = 1;
		while(!q.empty()){
			int l = -1 * q.top().S.F;
			int r = q.top().S.S;

			q.pop();

			if(l>r) continue;

			int m = (l+r)/2;
			a[m] = cnt++;
			
			q.push({m-l+1,{-1*l,m-1}});
			q.push({r-m+1,{-1*(m+1),r}});
		}

		for(auto i : a) cout << i << " ";
		cout << endl;
	}

	return 0;
}