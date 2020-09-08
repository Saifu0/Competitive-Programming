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

const int mxn = 200*200+50;
int p[mxn];
int len;

void build(int a, int b){
	len = a*b;
	p[0] = 0;

	for(int i=1;i<=len;i++){
		p[i] = p[i-1];
		if((i%a)%b != (i%b)%a){
			p[i]++;
		}
	}
}

int query(int l){
	int cnt = l/len;
	int rem = l%len;

	return p[len]*cnt + p[rem];
}

int query(int l, int r){
	return query(r)-query(l-1);
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int a,b,q; cin >> a >> b >> q;
		build(a,b);
		while(q--){
			int l,r; cin >> l >> r;
			cout << query(l,r) << " ";
		}
		cout << endl;
	}

	
	return 0;
}