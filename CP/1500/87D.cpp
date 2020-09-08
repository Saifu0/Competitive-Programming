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

const int mxn = 1e6+50;
int fen[mxn];
int n,q;

void update(int i,  int val){
	while(i>0 && i<mxn){
		fen[i] += val;
		i += i & (-i);
	}
}

int sum(int i){
	int s=0;
	while(i>0){
		s += fen[i];
		i -= i & (-i);
	}
	return s;
}

int32_t main(){
	NINJA;

	cin >> n >> q;
	fo(i,n){
		int x; cin >> x;
		update(x,1);
	}

	while(q--){
		int x; cin >> x;
		if(x > 0) update(x,1);
		else{
			x = abs(x);
			int l = 0,r = mxn;
			while(l<r){
				int m = (l+r)/2;
				int xx = sum(m);
				if(xx>=x) r = m;
				else l = m+1;
			}
			update(l,-1);
		}
	}

	int ans = sum(n);
	if(ans==0) cout << 0 << endl;
	else{
		int l = 0,r = mxn;
		while(l<r){
			int m = (l+r)/2;
			int val = sum(m);
			if(val>=ans){
				r = m;
			}else{
				l = m+1;
			}
		}
		cout << l << endl;
	}
	
	return 0;
}

