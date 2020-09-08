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

const int mxn = 2e5+50;
int f[mxn];
int n,q;
int a[mxn];

void update(int i, int val){
	while(i<=n){
		f[i] += val;
		i += (i & (-i));
	}
}

int query(int i){
	int sum = 0;
	while(i>0){
		sum += f[i];
		i -= (i &(-i));
	}
	return sum;
}

int32_t main(){
	NINJA;

	cin >> n >> q;
	fo(i,n){
		int x; cin >> x;
		update(i+1,x);
		a[i+1] = x;
	}

	//cout << query(7) << endl;

	while(q--){
		int t; cin >> t;
		int l,r; cin >> l >> r;
		if(t==2) cout << query(r)- query(l-1) << endl;
		else{
			update(l,-a[l]);
			update(l,r);
			a[l] = r;
		}
	}
	
	return 0;
}